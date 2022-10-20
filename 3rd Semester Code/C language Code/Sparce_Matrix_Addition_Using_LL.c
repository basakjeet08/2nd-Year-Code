#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data , row , column;
    struct Node* next ;
};
struct Node* getData(struct Node* , int );
void nonZeroElements(struct Node**);
struct Node* addSparceMatrix(struct Node* , struct Node*);
void showList(struct Node*);
int main(){
    struct Node* head1 , *head2 , *head3;
    int size; 
    head1 = head2 = NULL ;
    printf("Enter the Size of the Matrix : ");
    scanf("%d",&size);
    head1 = getData(head1 , size);
    head2 = getData(head2 , size);
    nonZeroElements(&head1);
    nonZeroElements(&head2);
    head3 = addSparceMatrix(head1 , head2);
    showList(head3);
    return 0 ;
}
struct Node* getData(struct Node* head , int size){ 
    struct Node* ptr ;
    for(int i = 0;i<size ; i++)
        for(int j = 0 ;j<size ; j++){
            struct Node* new = (struct Node*)malloc(sizeof(struct Node));
            printf("Element [%d] [%d] : ", i , j);
            scanf("%d",&new->data);
            new->row = i ;
            new->column = j ;
            new->next = NULL ;

            if(head == NULL)
                head = ptr = new;
            else{
                ptr->next = new ;
                ptr = new ;
            }
        }
        printf("\n");
    return head ;
}
void nonZeroElements(struct Node** head){
    struct Node* ptr = *head ;
    struct Node* prev = NULL ;
    while(ptr->data == 0){
        ptr = ptr->next ;
    }
    *head = ptr ;
    while(ptr != NULL){
        if(ptr->data == 0)
            prev->next = ptr->next ;
            else
                prev = ptr ;
        ptr = ptr->next;
    }
}
struct Node* adder(struct Node** head , struct Node** ptr3, struct Node* ptr){
    if(*head == NULL)
        *head = *ptr3 = ptr ;
    else{
        (*ptr3)->next = ptr ;
        *ptr3 = (*ptr3)->next;
    }
    return (ptr->next);
}
struct Node* addSparceMatrix(struct Node* ptr1 , struct Node* ptr2){
    struct Node* head3 = NULL ;
    struct Node* ptr3 = head3;
    while(ptr1 != NULL && ptr2 != NULL){

        if((ptr1->row) > (ptr2->row))
            ptr2 = adder(&head3, &ptr3 , ptr2);
        else if((ptr2->row) > (ptr1->row))
            ptr1 = adder(&head3, &ptr3 , ptr1);
        else{
            if((ptr1->column) > (ptr2->column))
                ptr2 = adder(&head3 , &ptr3 , ptr2);
            else if((ptr1->column) < (ptr2->column))
                ptr1 = adder(&head3 , &ptr3 , ptr1);
            else{
                ptr1->data += ptr2->data;
                ptr1 = adder(&head3 , &ptr3 , ptr1);
                ptr2 = ptr2->next;
            }
        }
    }
    struct Node* temp = (ptr1 != NULL)?ptr1 : ptr2 ;
    ptr3->next = temp ;
    return head3 ;
}
void showList(struct Node* head){
    while(head != NULL){
        printf("Element : [%d][%d] : %d \n" , head->row , head->column , head->data);
        head = head->next ;
    }
}