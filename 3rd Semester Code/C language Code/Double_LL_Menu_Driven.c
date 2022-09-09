#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *previous;
    int data;
    struct node *next;
}*head=NULL,*ptr,*new,*tail;

void create(){
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&new->data);
    new->next=NULL;
    new->previous=NULL;
    head=new;
    ptr=head;
    char ch;
    printf("Do you want to add another node (Y/N) ?");
    scanf("  %c",&ch);
    while(ch=='Y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d",&new->data);
        tail=new;
        new->next=NULL;
        new->previous=ptr;
        ptr->next=new;
        ptr=ptr->next;
        ptr->previous=new->previous;
        printf("Do you want to add another node (Y/N) ?\n");
        scanf("  %c",&ch);
    }ptr=head;
}

void display()
{
    ptr=head;printf("\n");
    printf("YOUR DOUBLE L.L :  ");
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    
    printf("\nYOUR DOUBLE L.L IN REVERSE :  ");
    while (tail!=NULL)
    {
        printf("%d",tail->data);
        tail=tail->previous;
    } 
    printf("\n");
}

void insertFirst()
{
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data for the new node :");
    scanf("%d",&new->data);
    new->next=head;
    new->previous=NULL;
    head->previous=new;
    head=new;    
}
int main()
{
    create();
    //display();
    insertFirst();
    display();

}