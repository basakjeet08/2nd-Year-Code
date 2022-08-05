#include <stdio.h>
int main(){
    printf("Enter the Number of Elements : ");
    int nos;
    scanf("%d", &nos);
    int arr[nos];
    printf("Enter the Elements of Array : ");
    for(int i=0;i<nos;i++)
        scanf("%d",&arr[i]);
    int temp ;
    for(int i=0;i<nos;i++){
        for(int j = 0;j<nos-1-i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The Sorted Array is : ");
    for(int i=0;i<nos;i++)
        printf("%d ",arr[i]);
    return 0;
}