#include <stdio.h>
int Push(int* , int, int);
int Pop(int* , int);
void showStack(int* , int);
int main(){
    int maxsize,choice,top = -1;
    printf("Enter the Size of the Array : ");
    scanf("%d",&maxsize);
    int stack[maxsize];
    do{
        printf("--------------------Menu --------------------\n");
        printf("1. PUSH into Stack \n");
        printf("2. POP into Stack \n");
        printf("3. Display Stack \n");
        printf("4. Exit \n");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : 
                top = Push(stack , top , maxsize);
                break ;
            case 2 : 
                top = Pop(stack , top);
                break ;
            case 3 : 
                showStack(stack , top);
                break;
            case 4 : 
                break ;
            default : 
                printf("Wrong Input !! Try Again !! \n"); 
        }
    }while(choice != 4);
    return 0 ;
}
int Push(int *stack , int top , int maxsize){
    if(top == --maxsize){
        printf("Stack OverFlow \n");
        return top ;
    }
    int value ;
    printf("Enter the Value : ");
    scanf("%d",&value);
    top++;
    *(stack+top) = value ;
    return top ;
}
int Pop(int *stack , int top){
    if(top == -1){
        printf("UnderFlow\n");
        return top ;
    }
    return (top-1);
}
void showStack(int *stack,int top){
    printf("Stack : \n");
    for(int i = top ;i>=0;i--)
        printf("%d ",*(stack+i));
    printf("\n");
}