#include <stdio.h>
#include <stdlib.h>
struct Node {
    int coeff , expo ;
    struct Node* next ;
};
struct Node* createPolynomial(struct Node*);
struct Node* polyAddition(struct Node* , struct Node*);
struct Node* insert_Element(struct Node** , struct Node* , int , int );
void showList(struct Node* );
int main(){
    struct Node* head1,*head2,*head3;
    head1 = head2 = head3 = NULL ;
    printf("Enter the First Polynomial Expression :------- \n");
    head1 = createPolynomial(head1);
    printf("\nEnter the Second Polynomial Expression :------- \n");
    head2 = createPolynomial(head2);
    showList(head1);
    showList(head2);
    head3 = polyAddition(head1 , head2);
    showList(head3);
    return 0 ;
}
struct Node* createPolynomial(struct Node* head){
    char choice ;
    struct Node* ptr = head ;
    do{
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter Coefficient : ");
        scanf("%d",&new->coeff);
        printf("Enter Exponent : ");
        scanf("%d",&new->expo);
        new->next = NULL ;
        if(head == NULL)
            head = ptr = new ;
        else{
            ptr->next = new ;
            ptr = new ;
        }
        printf("Do you wish to Continue(y/n) : ");
        scanf(" %c",&choice);
    }while(choice == 'y');
    return head ;
}
struct Node* polyAddition(struct Node* head1 , struct Node* head2){
    struct Node *ptr1 , *ptr2 , *ptr3,*head3;
    head3 = NULL;
    ptr1 = head1 ;
    ptr2 = head2 ;
    ptr3 = head3 ;
    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->expo == ptr2->expo){
            ptr3 = insert_Element(&head3 , ptr3 , ptr1->expo , (ptr1->coeff + ptr2->coeff));
            ptr1 = ptr1->next ;
            ptr2 = ptr2->next ;
        }
        else if(ptr1->expo > ptr2->expo){
            ptr3 = insert_Element(&head3 , ptr3 , ptr1->expo , ptr1->coeff);
            ptr1 = ptr1->next ;
        }
        else{
            ptr3 = insert_Element(&head3 , ptr3 , ptr2->expo , ptr2->coeff);
            ptr2 = ptr2->next ;
        }
    }
    if(ptr1 != NULL)
        ptr3->next = ptr1 ;
    else if(ptr2 != NULL)
        ptr3->next = ptr2 ;
    return head3 ;
}
struct Node* insert_Element(struct Node** head , struct Node* ptr , int expo , int coeff){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->coeff = coeff;
    new->expo = expo ;
    new->next = NULL ;
    
    if(*head == NULL){
        *head = new ;
        return *head ;
    }
    else{
        ptr->next = new ;
        ptr = new ;
        return ptr ;
    }
}
void showList(struct Node* head){
    struct Node* ptr = head ;
    while(ptr->next != NULL){
        printf("%d^%d + " , ptr->coeff , ptr->expo);
        ptr = ptr->next ;
    }
    printf("%d^%d\n" , ptr->coeff , ptr->expo);
}