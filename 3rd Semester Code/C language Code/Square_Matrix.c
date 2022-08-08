#include <stdio.h>
void nonZeroElements(int* ,int );
int main(){
    int nos;
    printf("Enter the Size of Array : ");
    scanf("%d",&nos);
    int arr[nos][nos];
    printf("Enter the Array Elements : \n");
    for(int i = 0;i<nos;i++){
        printf("Row %d : ",i+1);
        for(int j = 0;j<nos;j++)
            scanf("%d",&arr[i][j]);
    }
    nonZeroElements(arr[0],nos);
    return 0 ;
}
void nonZeroElements(int *arr , int nos){
    int count = 0;
    for(int i = 0;i<nos*nos;i++){
        if((*arr) != 0)
            count++;
        arr++;
    }
    printf("\nThe Number of Non-Zero Elements are : %d",count);
}