#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data ;
    struct Node* next ;
};
struct Node* createNode(struct Node*);
int countList(struct Node* , int);
void showList(struct Node*);
int main(){
    struct Node* head = NULL ;
    head = createNode(head);
    showList(head);
    int count = 0 ;
    count = countList(head , count) - 1;
    printf("The Size : %d",count);
    return 0 ;
}
struct Node* createNode(struct Node* head){
    struct Node* ptr = head ;
    int choice;
    do{
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the Data : ");
        scanf("%d", &new->data);
        new->next = NULL ;

        if(head == NULL)
            head = ptr = new ;
        else{
            ptr->next = new ;
            ptr = new ;
        }
        printf("Do you want to continue (1/0) : ");
        scanf("%d" ,&choice);
    }while(choice);
    return head ;
}
void showList(struct Node* head){
    struct Node* ptr = head ;
    while(ptr!= NULL) {
        printf("%d ",ptr->data);
        ptr = ptr->next ;
    }
}
int countList(struct Node* head , int count){
    if(head == NULL)
        return 1 ;
    if(head != NULL)
        count = countList(head->next , count);

    return (count + 1);
}