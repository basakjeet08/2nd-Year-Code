#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next ;
};
struct Node* Push(struct Node* );
struct Node* Pop(struct Node*);
void showStack(struct Node* );
int main(){
    int choice;
    struct Node* top = NULL;
    do{
        printf("--------------------Menu --------------------\n");
        printf("1. PUSH into Stack \n");
        printf("2. POP out of Stack \n");
        printf("3. Display Stack \n");
        printf("4. Exit \n");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : 
                top = Push(top);
                break ;
            case 2 : 
                top = Pop(top);
                break ;
            case 3 : 
                showStack(top);
                break;
            case 4 : 
                break ;
            default : 
                printf("Wrong Input !! Try Again !! \n"); 
        }
    }while(choice != 4);
    return 0 ;
}
struct Node* Push(struct Node* top){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->next = top ;
    return new;
}
struct Node*  Pop(struct Node* top){
    if(top == NULL){
        printf("Stack Underflow !! \n");
        return top ;
    }
    struct Node* temp = top ;
    top = top->next;
    free(temp);
    return top;
}
void showStack(struct Node* top){
    while(top != NULL){
        printf("%d ",top->data);
        top = top->next;
    }
    printf("\n");
}