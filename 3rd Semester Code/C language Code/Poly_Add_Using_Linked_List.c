#include <stdio.h>
#include <stdlib.h>
struct Node {
    int coeff , expo;
    struct Node* next;
};
struct Node* create(struct Node*);
int main(){
    struct Node* head;
    head = create(head);


    return 0 ;
}
struct Node* create(struct Node* head){
    struct Node* ptr;
    char choice;
    do{
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the First Coefficient : ");
        scanf("%d",&new->coeff);
        printf("Enter the Power : ");
        scanf("%d",&new->expo);
        if(head == NULL){
            head = new;
            ptr = head ;
        }
        else{
            ptr->next = new;
            ptr = new;
        }
        printf("Do you wish to Continue (y/n) : ");
        scanf(" %c",&choice);
    }while(choice == 'y');
}