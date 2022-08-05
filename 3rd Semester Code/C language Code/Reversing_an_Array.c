#include <stdio.h>

int main(){
    int nos;
    printf("Enter the Number of Elements : ");
    scanf("%d",&nos);
    int arr1[nos],arr2[nos];
    printf("Enter the Array Elements : ");
    for(int i=0;i<nos;i++)
        scanf("%d",&arr1[i]);
    
    for(int i=nos-1;i>=0;i--)
        arr2[i] = arr1[nos-1-i];

    printf("The Reversed Elements are : ");
    for(int i=0;i<nos;i++)
        printf("%d ",arr2[i]);
    return 0;
}