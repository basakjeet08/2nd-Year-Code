#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data ;
    struct Node* next ;
};
void menuOfTheProgram(struct Node*);
struct Node* enqueue(struct Node*);
struct Node* dequeue(struct Node*);
void showQueue(struct Node*);
int main(){
    struct Node* front = NULL;
    menuOfTheProgram(front);
    return 0 ;
}
void menuOfTheProgram(struct Node* front){
    int choice;
    do{
        printf("-------------------Menu -----------------\n");
        printf("1. Insert Elements \n");
        printf("2. Delete an Element \n");
        printf("3. Display \n");
        printf("4. Exit \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : 
                front = enqueue(front);
                break;
            case 2 :
                front = dequeue(front);
                break;
            case 3 :
                showQueue(front);
                break;
            case 4 :
                break;
            default :
                printf("Wrong Choice !!"); 
        }
    }while(choice != 4);
}
struct Node* enqueue(struct Node* front){
    char choice ;
    do{
        struct Node* queue = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the Data : ");
        scanf("%d", &queue->data);
        new->next = front ;
        front = queue ;
        printf("Do you Want to Continue (y/n) : ");
        scanf(" %c",&choice);
    }while(choice == 'y');
    return front ;
}
struct Node* dequeue(struct Node* front){
    struct Node* temp = front ;
    front = front ->next ;
    printf("%d \n" , temp->data);
    free(temp);
    return front ;
}
void showQueue(struct Node* front){
    struct Node* ptr = front ;
    while(ptr != NULL){
        printf("%d " , ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}