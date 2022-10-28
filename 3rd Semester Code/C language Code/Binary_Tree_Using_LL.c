#include <stdio.h>
#include <stdlib.h>
struct Tree{
    int data ;
    struct Tree* lc , *rc ;
};
void buildTree(struct Tree*);
void showDataInOrder(struct Tree*);
void showDataPostOrder(struct Tree*);
void showDataPreOrder(struct Tree*);
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
void showDataInOrder(struct Tree* ptr){
    if(ptr->lc != NULL)
        showDataInOrder(ptr->lc);
    printf("%d " , ptr->data);
    if(ptr->rc != NULL)
        showDataInOrder(ptr->rc);
}
void showDataPreOrder(struct Tree* ptr){
    printf("%d " , ptr->data);
    if(ptr->lc != NULL)
        showDataPreOrder(ptr->lc);
    if(ptr->rc != NULL)
        showDataPreOrder(ptr->rc);
}
void showDataPostOrder(struct Tree* ptr){
    if(ptr->lc != NULL)
        showDataPostOrder(ptr->lc);
    if(ptr->rc != NULL)
        showDataPostOrder(ptr->rc);
    printf("%d " , ptr->data);
}