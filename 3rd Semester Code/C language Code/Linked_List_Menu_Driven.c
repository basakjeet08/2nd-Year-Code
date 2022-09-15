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
struct Node* insert_pos(struct Node*);
struct Node* delete_first(struct Node*);
void delete_last(struct Node*);
struct Node* delete_pos(struct Node*);
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
        printf("2. Insert an Element \n");
        printf("3. Delete an Element \n");
        printf("4. Display the Linked List \n");
        printf("5. Exit \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                head = createNode(head);
                break;
            case 2 :
                head = insert_pos(head);
                break;
            case 3 :
                head = delete_pos(head);
            case 4 :
                displayList(head);
                break;
            case 5 :
                break;
            default :
                printf("Wrong Choice !!"); 
        }
    }while(choice != 5);
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
struct Node* insert_pos(struct Node* head){
    if(head == NULL){
        printf("Empty Linked List !! \n");
        return  head ;
    }
    int pos;
    printf("Enter the Position (1- Start && 0- Last) : ");
    scanf("%d",&pos);
    --pos;
    if(!pos)
        head = insert_first(head);
    else if(pos == -1)
        insert_last(head);
    else{
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the Data : ");
        scanf("%d",&new->data);
        struct Node* ptr = head ;
        while(ptr->next != NULL && --pos){
            ptr = ptr->next;
        }
        if(ptr == NULL){
            new->next = NULL ;
            ptr->next = new ;
        }
        else{
            new->next = ptr->next;
            ptr->next = new; 
        }
    }
    return head ;
}
struct Node* delete_first(struct Node* head){
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
void delete_last(struct Node* head){
    struct Node* temp,*ptr;
    ptr = head;
    while((ptr->next)->next != NULL){
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = NULL;
    free(temp);
}
struct Node* delete_pos(struct Node* head){
    if(head == NULL){
        printf("Empty Linked List !! \n");
        return head ;
    }
    else{
        int pos;
        printf("Enter the Position (1- Start && 0-Last): ");
        scanf("%d",&pos);
        --pos;
        if(!pos)
            head = delete_first(head);
        else if(pos == -1){
            delete_last(head);
        }
        else{
            struct Node* temp , *ptr = head; 
            while(ptr != NULL && --pos){
                ptr = ptr->next;
            }
            temp = ptr->next;
            ptr->next = temp->next;
            free(temp);
        }
    }
    return head ;
}
void displayList(struct Node* head){
    struct Node* ptr = head;
    printf("The Elements Are : \n");
    while(ptr != NULL){
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }
}