#include <stdio.h>
#include <stdlib.h>
struct node
{
    int coeff;
    int exponent;
    struct node *next;
}*head=NULL;
struct node* create(struct node *head)
{
    struct node *new,*ptr;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the coefficient and exponent : ");
    scanf("%d%d",&new->coeff,&new->exponent);
    new->next=NULL;
    head=new;
    ptr=head;
    char choice;
    printf("Do you want add another node (Y/N) : ");
    scanf("   %c",&choice);
    while(choice=='Y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the coefficient and exponent : ");
        scanf("%d%d",&new->coeff,&new->exponent);
        new->next=NULL;
        ptr->next=new;
        ptr=ptr->next;
        printf("Do you want add another node (Y/N) : ");
        scanf("  %c",&choice);
    }
    ptr=head;
    return head;
}

struct node* insert(struct node *head3,int exponent,int coeff){
    printf("%d\n",coeff);
    struct node *new,*ptr;
    new=(struct node *)malloc(sizeof(struct node));
    new->coeff=coeff;
    new->exponent=exponent;
    new->next=NULL;
    if(head3==NULL){
        head3=new;
    }else{
        ptr=head3;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new;
    }
    return head3;
}
void display(struct node* head3)
{
    struct node *ptr3;
    ptr3=head3;
    while(ptr3!=NULL)
    {
        printf("+ %dx^%d ",ptr3->coeff,ptr3->exponent);
        ptr3=ptr3->next;
    }
}

void polyAdd(struct node *head1,struct node *head2)
{
    struct node *head3,*ptr1,*ptr2;
    ptr1=head1;ptr2=head2;
    while(ptr1!=NULL&&ptr2!=NULL)
    {
        if((ptr1->exponent)==(ptr2->exponent)){
            head3=insert(head3,ptr1->exponent,(ptr1->coeff+ptr2->coeff));
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else if (ptr1->exponent>ptr2->exponent)
        {
            head3=insert(head3,ptr1->coeff,ptr1->exponent);
            ptr1=ptr1->next;
        }
        else if (ptr2->exponent>ptr1->exponent)
        {
            head3=insert(head3,ptr2->coeff,ptr2->exponent);
            ptr2=ptr2->next;
        }        
    }
    while(ptr1!=NULL)
    {
        head3=insert(head3,ptr1->coeff,ptr1->exponent);
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        head3=insert(head3,ptr2->coeff,ptr2->exponent);
        ptr2=ptr2->next;    
    }
    display(head3);
}

int main()
{
    struct node *head3,*head2,*head1;
    head1 = head2 = NULL;
    head1 = create(head1);
    head2 = create(head2);
    //insert(head3,exponent,coeff);
    polyAdd(head1,head2);
    // display(head3);

}