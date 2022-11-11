#include <stdio.h>
#include <stdlib.h>
struct Tree {
    int data ;
    struct Tree *lc , *rc ;
};
void buildTree(struct Tree*);
void showTree(struct Tree*);
int main(){
    int choice ;
    struct Tree* root = (struct Tree*)malloc(sizeof(struct Tree)) ;
    printf("Enter the Root Node : ");
    scanf("%d",&root->data);
    root->lc = root->rc = NULL ;
    do{
        buildTree(root);
        printf("Do you want to enter another Element (1/0) : ");
        scanf("%d",&choice);
    }while(choice);
    showTree(root);
}
struct Tree* buildTree(struct Tree* root){
    struct Tree* ptr = root ;
    struct Tree* new = (struct Tree*)malloc(sizeof(struct Tree));
    printf("Enter the Data : ");
    scanf("%d",&new->data);
    new->lc = new->rc = NULL ;
    while(1){
        if(ptr->data < new->data){
            if(ptr->rc !=NULL)
                ptr = ptr->rc ;
            else{
                ptr->rc = new ;
                break;
            }
        }
        else{
            if(ptr->lc != NULL)
                ptr = ptr->lc ;
            else{
                ptr->lc = new ;
                break;
            }
        }
    }
}
void showTree(struct Tree* root){
    if(root->lc != NULL)
        showTree(root->lc);
    printf("%d " , root->data);
    if(root->rc != NULL)
        showTree(root->rc);
}