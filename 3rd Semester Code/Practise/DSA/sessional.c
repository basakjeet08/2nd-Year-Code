#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data ;
    struct Node* next ;
};
struct Node* createNode(struct Node*);
struct Node* adder(struct Node** , struct Node* , int);
struct Node* calculateOrder(struct Node* , struct Node* ,struct Node*);
void display(struct Node*);
struct Node* sort(struct Node*);
int main(){
    struct Node* head1 , *head2 , *head3 ;
    head1 = head2 = head3 = NULL ;
    head1 = createNode(head1);
    head2 = createNode(head2);
    head3 = calculateOrder(head1,head2 , head3);
    head3 = sort(head3);
    display(head3);
    return 0 ;
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
struct Node* adder(struct Node** head3 , struct Node* ptr3 , int data){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = data ;
    new->next = NULL ;
    if(*head3 == NULL)
        *head3 = new;
    else
        ptr3->next = new;
    return new;
}
struct Node* calculateOrder(struct Node* head1 , struct Node* head2 , struct Node* head3){
    struct Node* ptr1 , *ptr2;
    ptr1 = head1 ;
    ptr2 = head2 ;
    struct Node* ptr3 = head3;
    int flag ;
    while(ptr1 != NULL && ptr2 != NULL){
        if(flag == 1){
            ptr3 = adder(&head3 , ptr3 , ptr1->data);
            ptr1 = ptr1->next ;
            flag = 0 ;
        }
        else{
            ptr3 = adder(&head3 , ptr3 , ptr2->data);
            ptr2 = ptr2->next ;
            flag = 1 ;
        }
    }
    return head3 ;
}
struct Node* sort(struct Node* head){
    struct Node* ptr1 = head ;
    struct Node* ptr2 ;
    while(ptr1 != NULL){
        ptr2 = ptr1;
        while(ptr2 != NULL){
            if(ptr2->data > ptr2->next->data){
                int temp = ptr2->data ;
                ptr2->data = ptr2->next->data ;
                ptr2->next->data = temp ;
            }
            ptr2 = ptr2->next ;
        }
        ptr1 = ptr1->next ;
    }
    return head ;
}
void display(struct Node* head){
    if(head->next != NULL)
        display(head->next);
    printf("%d" , head->data);
}