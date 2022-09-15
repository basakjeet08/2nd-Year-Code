#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data ;
    struct Node* next,*prev;
};
void menuOfTheProgram(struct Node* , struct Node* );
struct Node* createNode(struct Node**);
struct Node* insert_First(struct Node*);
struct Node* insert_Last(struct Node* );
struct Node* insert_Position(struct Node** , struct Node* );
struct Node* delete_First(struct Node*);
struct Node* delete_Last(struct Node* );
struct Node* delete_Position(struct Node** , struct Node* );
void showList(struct Node*);
int main(){
    struct Node* head = NULL;
    struct Node* tail = NULL;
    
    menuOfTheProgram(head,tail);
    return 0 ;
}
void menuOfTheProgram(struct Node* head , struct Node* tail){
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
                tail = createNode(&head);
                break ;
            case 2 : 
                insert_Position(&head , tail);
                break ;
            case 3 : 
                delete_Position(&head,tail);
                break ;
            case 4 :
                showList(head);
                break ;
            case 5 :
                break ;
            default : 
                printf("Wrong Choice !! Try Again !! \n\n");
        }
    }while(choice != 5);
}
struct Node* createNode(struct Node** head){
   char choice;
   struct Node* ptr = NULL ;
   struct Node* tail = NULL ;
   do{
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = NULL;
    if(ptr == NULL){
        ptr = new ;
        *head = new ;
    }
    else{
        ptr->next = new ;
        new->prev = ptr ;
        ptr = new ;
    }
    printf("Do you want to Continue (y/n) : ");
    scanf(" %c",&choice);
    tail = new ;
   }while(choice == 'y');
   return tail ;
}
struct Node* insert_First(struct Node* head){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->prev = NULL ;
    new->next = head ;
    head->prev = new ;
    head = new ;
    return head ;
}
struct Node* insert_Last(struct Node* tail){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = NULL ;
    new->prev = tail ;
    tail->next = new ;
    tail = new ;
    return tail ;
}
struct Node* insert_Position(struct Node** head , struct Node* tail){
    if(*head == NULL){
        printf("Empty Linked List !! Create Node First !!\n");
        return NULL ;
    }
    struct Node* ptr = *head ;
    int pos ;
    printf("Enter the Position (1-First && 0-Last) : ");
    scanf("%d",&pos);
    pos--;
    if(!pos){
        *head = insert_First(*head);
        return tail;
    }
    else if(pos == -1){
        tail = insert_Last(tail);
        return tail ;
    }
    else{
        while(ptr != NULL && --pos){
            ptr = ptr->next;
        }
        if(ptr == NULL)
            tail = insert_Last(tail);
        else{
            struct Node* new = (struct Node*)malloc(sizeof(struct Node));
            printf("Enter the Data : ");
            scanf("%d",&new->data);
            new->next = ptr->next;
            new->prev = ptr;
            ptr->next = new;
            (new->next)->prev = new ;
        } 
    }
    return tail ;
}
struct Node* delete_First(struct Node* head){
    struct Node* temp = head ;
    head = head->next;
    head->prev = NULL;
    free(temp);
    return head ;
}
struct Node* delete_Last(struct Node* tail){
    struct Node* temp = tail ;
    tail = tail->prev;
    tail->next = NULL ;
    free(temp);
    return tail ;
}
struct Node* delete_Position(struct Node** head , struct Node* tail){
    if(*head == NULL){
        printf("Empty Linked List !! Create Node First !!\n");
        return NULL ;
    }
    int pos ;
    struct Node* ptr = *head ;
    printf("Enter the Position (1-First && 0-Last) : ");
    scanf("%d",&pos);
    pos--;
    if(!pos){
        *head = delete_First(*head);
        return tail;
    }
    else if(pos == -1){
        tail = delete_Last(tail);
        return tail ;
    }
    else{
        while(ptr != NULL && --pos){
            ptr = ptr->next ;
        }
        if(ptr == NULL)
            tail = delete_Last(tail);
        else{
            struct Node* temp = ptr->next ;
            ptr->next = temp->next;
            (temp->next)->prev = ptr ;
            free(temp);
        }
    }
    return tail ;
}
void showList(struct Node* head){
    struct Node* ptr = head ;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}