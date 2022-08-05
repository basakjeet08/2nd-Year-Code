#include <stdio.h>
int main(){
    printf("Enter the Number of Elements : ");
    int nos;
    scanf("%d", &nos);
    int arr[nos];
    printf("Enter the Elements of Array : ");
    for(int i=0;i<nos;i++)
        scanf("%d",&arr[i]);
    int arr1[nos] ;
    arr1[nos-1] = -1;
    for(int i=0;i<nos-1;i++){
        int flag = 1;
        for(int j = i+1;j<nos;j++){
            if(arr[j] > arr[i]){
                arr1[i] = arr[j];
                flag = 0;
                break;
            }
            if(flag)
                arr1[i] = -1;
        }
    }
    printf("The Result Is As Follows : \n");
    for(int i=0;i<nos;i++)
        printf("Element : %d \t\t NGE : %d\n",arr[i],arr1[i]);
    return 0;
}