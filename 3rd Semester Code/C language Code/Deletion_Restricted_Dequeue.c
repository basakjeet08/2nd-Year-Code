// Deletion restricted Dequeue using linked list
#include <stdlib.h>
#include <stdio.h>
struct Node {
    int data ;
    struct Node* next ;
};
void menuOfTheProgram(struct Node*);
struct Node* createNode(struct Node*);
struct Node* insert_first(struct Node* );
void insert_last(struct Node* );
struct Node* delete_first(struct Node*);
void displayList(struct Node*);

int main(){
    struct Node* head = NULL ;
    menuOfTheProgram(head);
    return 0 ;
}
void menuOfTheProgram(struct Node* head){
    int choice ;
        do{
        printf("-------------------Menu -----------------\n");
        printf("1. Create another Node \n");
        printf("2. Insert an Element at Beggining \n");
        printf("3. Insert an Element at End \n");
        printf("4. Delete an Element \n");
        printf("5. Display the Linked List \n");
        printf("6. Exit \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                head = createNode(head);
                break;
            case 2 :
                head = insert_first(head);
                break;
            case 3 :
                insert_last(head);
                break;
            case 4 :
                head = delete_first(head);
            case 5 :
                displayList(head);
                break;
            case 6 :
                break;
            default :
                printf("Wrong Choice !!"); 
        }
    }while(choice != 6);
}
struct Node* createNode(struct Node* head){
   char choice;
   struct Node* ptr = head ;
   do{
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = NULL;
    if(ptr == NULL)
        ptr = head = new ;
    else{
        ptr->next = new ;
        ptr = new ;
    }
    printf("Do you want to Continue (y/n) : ");
    scanf(" %c",&choice);
   }while(choice == 'y');
   return head ;
}
struct Node* insert_first(struct Node* head){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = head;
    return new;
}
void insert_last(struct Node* head){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = NULL;
    struct Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new;
}
struct Node* delete_first(struct Node* head){
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
void displayList(struct Node* head){
    struct Node* ptr = head;
    printf("The Elements Are : \n");
    while(ptr != NULL){
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }
}