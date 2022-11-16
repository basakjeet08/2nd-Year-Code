#include <stdio.h>
#include <stdlib.h>
struct Tree{
    int data ;
    struct Tree* lc , *rc ;
};
struct Node{
    struct Tree* data ;
};
void buildTree(struct Tree*);
struct Node* insert_First(struct Node*);
int main(){
    struct Tree* root  = (struct Tree*)malloc(sizeof(struct Tree));
    buildTree(root);
    showDataInOrder(root);
    printf("\n");
    showDataPostOrder(root);
    printf("\n");
    showDataPreOrder(root);
    return 0 ;
}
void buildTree(struct Tree* ptr){
    int choice ;
    printf("Enter the value : ");
    scanf("%d",&ptr->data);
    ptr->lc = ptr->rc = NULL ;

    printf("Do you want to enter the Left Child of %d (1/0) : " , ptr->data);
    scanf("%d",&choice);
    if(choice){
        struct Tree* new = (struct Tree*)malloc(sizeof(struct Tree));
        ptr->lc = new ;
        buildTree(new);
    }
    printf("Do you want to enter the Right Child of %d (1/0) : " , ptr->data);
    scanf("%d",&choice);
    if(choice){
        struct Tree* new = (struct Tree*)malloc(sizeof(struct Tree));
        ptr->rc = new ;
        buildTree(new);
    }
}
struct Node* insert_First(struct Node* head){
    
}