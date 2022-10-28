#include <stdio.h>
void buildTree(int[] , int , int);
int main(){
    int tree[20] , data ;
    printf("Anirban Basak \n21051880\n");
    for(int i=0;i<20;i++)
        tree[i] = -1 ;
    printf("Enter the Root Node : ");
    scanf("%d",&data);
    buildTree(tree , 0 , data);

    for(int i = 0;i<20;i++){
        if(tree[i] == -1)
            printf("__");
        else
            printf("%d " ,tree[i]);
    }
    return 0;
}
void buildTree(int tree[] , int index , int item){
    int data , choice;
    tree[index] = item ;
    printf("Do you want to enter a left Child of %d (1/0) : " , item);
    scanf("%d" , &choice);
    if(choice == 1){
        printf("Enter the Left Child : ");
        scanf("%d" , &data);
        buildTree(tree , ((index*2)+1) , data);
    }
    printf("Do you want to enter the Right Child of %d (1/0) : " , item);
    scanf("%d" , &choice);
    if(choice == 1){
        printf("Enter the Right Child : ");
        scanf("%d" , &data);
        buildTree(tree , ((index*2)+2) , data);
    }
}