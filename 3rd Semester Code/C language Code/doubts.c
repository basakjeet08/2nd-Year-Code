#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
int data;
struct node *link;
}
*start=NULL, *end=NULL;
void create()
{
    struct node *temp;
    temp=(struct node*) malloc(sizeof(struct node));
    printf(" enter the value of data for node %d\n",count);
    scanf("%d",&temp->data);
    temp->link=NULL;
    count++;
    if(start==NULL)
    {   
        start=temp;
        end=temp;
    }
    else
    {   
        end->link=temp;
        end=temp;
    }  
}
void display()
{
    struct node *p;
    p=start;
    printf("the data is \n");
   while (p!=NULL)
    {
        printf("%d\n", p->data);
        p=p->link;
    }
   
}
int main()
{
    int size,o,d,y=0;
    printf("enter the size of the linked list \n");
    scanf("%d",&size);
    for (int i=0;i<size;i++)
    {
        create();
    }
    display();
   struct node *t,*v,*temp,*z;
    t=start;
    
    for(int i=0;i<size-y-1;i++)
    {
        v=t;
        for(int k=0;k<size-i-y-1;k++)
        {
            z=v->link;
            
            if(t->data==z->data)
            {
                temp=(struct node*)malloc(sizeof(struct node));
                temp=z->link;
                v->link=temp;       
                y++;
            }
            else 
            v=v->link;
        }
        t=t->link;
    
    }
   display();
    return 0;
}