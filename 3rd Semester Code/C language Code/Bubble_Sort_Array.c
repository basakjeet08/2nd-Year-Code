#include <stdio.h>
int main(){
    int size ;
    printf("Enter the Size of the Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the Array Elements : ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<size-1;i++)
        for(int j=0;j<size-1-i;j++)
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
    printf("The Sorted Array : ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}