#include <stdio.h>
int main(){
    int nos;
    printf("Enter the Number of Elements : ");
    scanf("%d",&nos);
    int arr[nos];
    printf("Enter the Array Elements : \n");
    for(int i = 0;i<nos;i++)
        scanf("%d",&arr[i]);
    
    int max,min;
    max = min = arr[0];
    for(int i=0;i<nos;i++){
        if(max<arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }
    printf("The Largest Element : %d\n",max);
    printf("The Smallest Element : %d\n",min);
    return 0;
}