#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data ;
    struct Node* next ;
};
struct Node* createNode(struct Node*);
struct Node* calculateOrder(struct Node* , struct Node* , struct Node*);
void display(struct Node*);
int main(){
    struct Node* head1 , *head2 , *head3 ;
    head1 = head2 = head3 = NULL ;
    head1 = createNode(head1);
    head2 = createNode(head2);
    head3 = calculateOrder(head1 , head2 ,head3);
    display(head3);
    return 0 ;
}
struct Node* createNode(struct Node* head){
    struct Node* ptr = head ;
    char choice ;
    do{
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        new->next = NULL ;
        printf("Enter the Data : ");
        scanf("%d",&new->data);

        if(head == NULL)
            ptr = head = new ;
        else{
            ptr->next = new ;
            ptr = new ;
        }
        printf("Do you wish to Continue (y/n) : ");
        scanf(" %c" , &choice);
        
    }while(choice == 'y');
    return head ;
}
void display(struct Node* head){
    struct Node* ptr = head ;
    while(ptr!= NULL){
        printf("%d  " , ptr->data);
        ptr = ptr->next ; 
    }
}
struct Node* adder(struct Node** head3 , struct Node* ptr3 , int data){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->next = NULL ;
    new->data = data ;
    if(*(head3) == NULL)
        *head3 = ptr3 = new ;
    else
        ptr3->next = new;
    return new ;
}
struct Node* calculateOrder(struct Node* head1 , struct Node* head2 , struct Node* head3){
    struct Node* ptr1 = head1 ;
    struct Node* ptr2 = head2 ;
    struct Node* ptr3 = head3 ;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->data > ptr2->data){
            ptr3 = adder(&head3 , ptr3 , ptr2->data);
            ptr2 = ptr2->next ;
        }
        else{
            ptr3 = adder(&head3 , ptr3 , ptr1->data);
            ptr1 = ptr1->next ;
        }
    }
    if(ptr1 != NULL)
        ptr3->next = ptr1;
    else
        ptr3->next = ptr2;
    return head3 ;
}