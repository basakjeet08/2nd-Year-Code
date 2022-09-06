#include <stdio.h>
int main(){
    int size , search , flag;
    flag = 0;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array Elements : ");
    for(int i=0;i<size ;i++)
        scanf("%d",&arr[i]);
    printf("Enter the Element to be Searched : ");
    scanf("%d",&search);
    for(int i=0;i<size;i++)
        if(arr[i] == search){
            flag= 1;
            break;
        }
    if(flag)
        printf("Element Found \n");
    else
        printf("Element Not Found \n");
}