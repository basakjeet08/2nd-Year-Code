#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next ;
};
void menuOfTheProgram(struct Node*);
struct Node* enqueue(struct Node*);
struct Node* dequeue(struct Node*);
void traversal(struct Node*);
int main(){
    struct Node* front;
    front = NULL;
    menuOfTheProgram(front);
}
void menuOfTheProgram(struct Node* front){
    int choice = 0;
    while(choice != 4){
        printf("1. Insert an Element \n");
        printf("2. Delete an Element \n");
        printf("3. Display the Queue \n");
        printf("4. Exit \n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                front = enqueue(front);
                break;
            case 2 :
                front = dequeue(front);
                break;
            case 3 :
                traversal(front);
                break;
            case 4 :
                break;
            default : 
                printf("Wrong Choice \n");
        }
    }
}
struct Node* enqueue(struct Node* ptr){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Element : ");
    scanf("%d",&new->data);
    new->next = NULL ;
    if(ptr == NULL)
        return new;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new ;
    return ptr;
}
struct Node* dequeue(struct Node* ptr){
    if(ptr == NULL){
        printf("UnderFlow \n");
        return ptr;
    }
    struct Node* temp = ptr ;
    ptr = ptr->next;
    free(temp);
    return ptr ;
}
void traversal(struct Node* front){
    while(front != NULL){
        printf("%d ",front->data);
        front = front->next;
    }
    printf("\n");
}