#include <stdio.h>
#include <stdlib.h>
struct Node{
    int row,column,data;
    struct Node* next ;
};
struct Node* getData(struct Node*, int);
int nonZeroElements(struct Node**);
void showList(struct Node*);
int main(){
    int count,size;
    struct Node* head = NULL;
    printf("Enter the Size : ");
    scanf("%d",&size);
    head = getData(head,size);
    count = nonZeroElements(&head);
    printf("%d %d %d\n",size,size,count);
    showList(head);
    return 0 ;
}
struct Node* getData(struct Node* head , int size){
    struct Node* ptr ;
    for(int i=0;i<size;i++){
        for(int j = 0;j<size;j++){
            struct Node* new = (struct Node*)malloc(sizeof(struct Node));
            printf("Row %d Column %d : ", i,j);
            scanf("%d",&new->data);
            new->row = i ;
            new->column = j ;
            new->next = NULL ;
            if(head == NULL)
                ptr = head = new ;
            else{
                ptr->next = new ;
                ptr = new ;
            }
        }
    }
    return head ;
}
int nonZeroElements(struct Node** head){
    struct Node* ptr = *head ;
    struct Node* prev = NULL ;
    int count = 0;
    while(ptr->data == 0){
        ptr = ptr->next ;
    }
    *head = ptr ;
    while(ptr != NULL){
        if(ptr->data == 0)
            prev->next = ptr->next ;
            else{
                prev = ptr ;
                count++;
            }
        ptr = ptr->next;
    }
    return count ;
}
void showList(struct Node* head){
    struct Node* ptr = head ;
    while(ptr != NULL){
        printf("%d %d %d\n",ptr->row,ptr->column,ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}