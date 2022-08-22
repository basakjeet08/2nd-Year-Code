#include <stdio.h>
#include <stdlib.h>
void getData(int* , int);
void Search(int * , int );
int main(){
    int nos ;
    printf("Enter the Number of Array Elements : ");
    scanf("%d",&nos);
    int *ptr = (int *)malloc(nos*sizeof(int));
    getData(ptr,nos);
    Search(ptr,nos);
    return 0 ;
}
void getData(int* ptr , int nos){
    printf("Enter Array Elements : \n");
    for(int i=0;i<nos;i++){
        scanf("%d",ptr);
        ptr++;
    }
}
void Search(int* ptr, int nos){
    printf("Enter the Number to be searched : ");
    int element;
    scanf("%d",&element);
    int flag = 0;
    for(int i=0;i<nos;i++){
        if(*ptr == element){
            flag = i+1 ;
            break;
        }
        ptr++;
    }
    if(flag != 0)
        printf("Element Found at Position : %d\n",flag);
    else
        printf("Element Not Found !!\n");
}
