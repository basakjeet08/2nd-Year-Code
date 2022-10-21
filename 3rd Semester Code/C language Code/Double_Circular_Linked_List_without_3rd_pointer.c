#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data ;
    struct Node* next, *prev ;
};
struct Node* createNode(struct Node*);
void insert_Last(struct Node* );
void showListForward(struct Node*);
void showListBackward(struct Node*);
int main(){
    struct Node* head = NULL;
    head = createNode(head);
    insert_Last(head);
    showListForward(head);
    showListBackward(head);
    return 0 ;
}
struct Node* createNode(struct Node* head ){
    struct Node* ptr;
    char choice;
    do{
        struct Node* new = (struct Node*) malloc(sizeof(struct Node));
        printf("\nEnter the Data : ");
        scanf("%d",&new->data);
        if(head == NULL)
            head = ptr = new ;
        else{
            ptr->next = new ;
            new->prev = ptr ;
            ptr = new ;
        }
        new->next = head ;
        printf("Do you Wish to Continue (y/n) : ");
        scanf(" %c", &choice);
    }while(choice == 'y');
    head->prev = ptr ;
    return head ;
}
void insert_Last(struct Node* head ){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d",&new->data);
    new->next = head ;
    new->prev = head->prev;
    (head->prev)->next = new ;
    head->prev = new ;
}
void showListForward(struct Node* head){
    struct Node* ptr = head ;
    do{
        printf("%d ",ptr->data);
        ptr = ptr->next ;
    }while(ptr != head);
    printf("\n");
}
void showListBackward(struct Node* head){
    struct Node* ptr = head->prev ;
    do{
        printf("%d ",ptr->data);
        ptr = ptr->prev ;
    }while(ptr->next != head);
    printf("\n");
}