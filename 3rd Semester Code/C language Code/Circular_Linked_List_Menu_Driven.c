#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data ;
    struct Node* next ;
};
void menuOfTheProgram(struct Node*);
struct Node* createNode(struct Node*);
struct Node* insert_First(struct Node*);
void insert_Last(struct Node* );
struct Node* insert_Position(struct Node* );
struct Node* delete_First(struct Node*);
void delete_Last(struct Node* );
struct Node* delete_Position(struct Node*);
void showList(struct Node*);
int main(){
    struct Node* head = NULL;
    menuOfTheProgram(head);

    return 0 ;
}
void menuOfTheProgram(struct Node* head){
    int choice;
    do{
        printf("-----------------------------------------\n");
        printf("1. Create an Node :-\n");
        printf("2. Insert an Element :-\n");
        printf("3. Delete an Element :-\n");
        printf("4. Display the Node :-\n");
        printf("5. Exit !! \n\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1 : 
                head = createNode(head);
                break;
            case 2 : 
                head = insert_Position(head);
                break ;
            case 3 : 
                head = delete_Position(head);
                break ;
            case 4 :
                showList(head);
                break;
            case 5 : 
                break;
            default : 
                printf("Wrong Choice !! Try Again !! \n\n");
        }
    }while(choice != 5);
}
struct Node* createNode(struct Node* head ){
    struct Node* ptr;
    char choice;
    do{
        struct Node* new = (struct Node*) malloc(sizeof(struct Node));
        printf("\nEnter the Data : ");
        scanf("%d",&new->data);
        if(head == NULL){
            head = new ;
            ptr = head ;
        }
        else{
            ptr->next = new ;
            ptr = new ;
        }
        new->next = head ;

        printf("Do you Wish to Continue (y/n) : ");
        scanf(" %c", &choice);
    }while(choice == 'y');
    return head ;
}
struct Node* insert_First(struct Node* head){
    struct Node* new = (struct Node* )malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    struct Node* ptr = head ;
    while(ptr->next != head){
        ptr = ptr->next ;
    }
    new->next = head;
    ptr->next = new ;
    head = new;
    return head ;
}
void insert_Last(struct Node* head ){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d",&new->data);
    struct Node* ptr = head ;
    while(ptr->next!= head){
        ptr = ptr->next;
    }
    ptr->next = new ;
    new->next = head ;
}
struct Node* insert_Position(struct Node* head ){
    if(head == NULL){
        printf("Empty Linked List !! Create A Linked List First !!\n");
        return head ;
    }
    int pos ;
    printf("Enter the Position (1-First && 0-Last) : ");
    scanf("%d",&pos);
    if(pos == 1)
        head = insert_First(head);
    else if(pos == 0)
        insert_Last(head);
    else{
        pos-= 2;
        struct Node* ptr = head ;
        do{
            ptr = ptr->next;
        }while(ptr!= head && --pos);
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter Data : ");
        scanf("%d",&new->data);
        new->next = ptr->next;
        ptr->next = new;
    }
    return head ;
}
struct Node* delete_First(struct Node* head){
    struct Node* ptr = head;
    while(ptr->next != head){
        ptr = ptr->next ;
    }
    ptr->next = head->next ;
    ptr = head ;
    head = head->next;
    free(ptr);
    return head ;
}
void delete_Last(struct Node* head){
    struct Node* ptr = head ;
    while((ptr->next)->next != head){
        ptr = ptr->next;
    }
    struct Node* temp = ptr->next;
    ptr->next = head ;
}
struct Node* delete_Position(struct Node* head ){
    if(head == NULL){
        printf("The List is Empty !! \n");
        return head ;
    }
    int pos ;
    printf("Enter the Position (1-First && 0-Last) : ");
    scanf("%d",&pos);
    if(pos == 1)
        head = delete_First(head);
    else if(pos == 0)
        delete_Last(head);
    else{
        pos -=2;
        struct Node* ptr = head ;
        do{
            ptr = ptr->next;
        }while((ptr->next)->next != head && --pos);
        if((ptr->next)->next == head)
            ptr->next = head ;
        else{
            struct Node* temp = ptr->next;
            ptr->next = (ptr->next)->next;
            free(temp);
        }
    }
    return head;
}
void showList(struct Node* head){
    struct Node* ptr = head ;
    do{
        printf("%d ",ptr->data);
        ptr = ptr->next ;
    }while(ptr != head);
    printf("\n");
}