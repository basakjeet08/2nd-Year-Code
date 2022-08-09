#include <stdio.h>
int main(){
    int nos;
    printf("Enter the Number of Elements : ");
    scanf("%d",&nos);
    int arr[nos];
    printf("Enter the Array Elements : ");
    for(int i = 0;i<nos;i++)
        scanf("%d",&arr[i]);
    int new[nos];
    int count = 0;
    for(int i = 0;i<nos;i++)
        if(arr[i]%2 == 0){
            new[count] = arr[i];
            count++;
        }
    for(int i = 0;i<nos;i++)
        if(arr[i]%2 != 0){
            new[count] = arr[i];
            count++;
        }
    printf("The Resultant : ");
    for(int i=0;i<nos;i++)
        printf("%d ",new[i]);
    return 0 ;
}