#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *new;
    int data;
    struct node *next;
}*head=NULL;
void create()
{
    struct node *ptr,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value :");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;
    ptr=head;
    char ch;
    printf("Do you want to add another node : (Y/N)");
    scanf("  %c",&ch);
    while(ch=='Y')
    {
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value :");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=ptr->next;
        printf("Do you want to add another node : (Y/N)");
        scanf("  %c",&ch);
        
    }
    ptr=head;
}
void print()
{
    struct node *ptr=head;
    printf("\n");
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }printf("\n");
}

void insertFirst()
{
    struct node *ptr=head,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    
}

void insertLast()
{
    struct node *ptr=head,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=NULL;
}
void insertPosition()
{
    struct node *ptr=head;struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    int pos;
    printf("Enter the desired position :");
    scanf("%d",&pos);
    int count=1;
    while(ptr!=NULL&&count!=pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    new->next=ptr->next;
    ptr->next=new;
}

void deleteFirst()
{
    struct node *ptr=head,*new,*temp;
    if(head==NULL){
        printf("Not possible !");
        exit;
    }else{
        temp=head;
        head=head->next;
        free(temp);
    }
}
void deleteLast()
{
    struct node *ptr=head,*new;
    if(head==NULL){
        printf("Not possible !");
        exit;
    }else{

        while((ptr->next)->next!=NULL)
        {
            ptr=ptr->next;
        }
        struct node *temp=ptr->next;
        ptr->next=NULL;
        free(temp);
    }
}    
void deletePosition()
{
    {
    struct node *new,*ptr=head;
    if(head==NULL){
        printf("Not possible !");
        exit;
    }else{
        int count=1,pos;
        printf("\nEnter the position :");
        scanf("%d",&pos);
        while((ptr->next)->next!=NULL&&count!=pos-1)
        {
            ptr=ptr->next;
            count++;
        }
        struct node *temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
    }
}
}
void swap(){
    int count = 0;
    struct node* prev , *ptr, *temp;
    ptr = prev = head ;
    while(ptr != NULL){
        temp = ptr;
        ptr = ptr->next;
        temp->next = ptr->next;
        prev = temp;
        if(!count){
            head = ptr;
            count++;
        }
        ptr = temp->next;
        prev->next = ptr; 
    }
}
void main()
{
    create();
    print();
    int choice;
    
    while (choice!=0)
    {
        printf("\nENTER YOUR CHOICE\n");
        printf("PRESS 1:FOR INSERT AT FIRST\n");
        printf("PRESS 2:FOR INSERT AT A POSITION\n");
        printf("PRESS 3:FOR INSERT AT LAST\n");
        printf("PRESS 4:FOR DELETION AT FIRST\n");
        printf("PRESS 5:FOR DELETION AT A POSITION\n");
        printf("PRESS 6:FOR DELETION AT LAST\n");
        printf("PRESS 7:FOR SWAPPING\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertFirst();
                print();
                break;
            case 2:
                insertPosition();
                print();
                break;
            case 3:
                insertLast();
                print();
                break;
            case 4:
                deleteFirst();
                print();
                break;
            case 5:
                deletePosition();
                print();
                break;
            case 6:
                deleteLast();
                print();
                break;
            case 7:
                swap();
                print();
                break;    
            default:
                choice=0;
                printf("\nYOU ENDED THE PROGRAM !\nYOUR LINKED LIST HAS:");
                print();
        }
    }
}