#include <stdio.h>
int main(){
    int nos;
    printf("Enter the number of Elements of Array : ");
    scanf("%d",&nos);
    int arr[nos];
    printf("Enter the Elements of Array with spaces: ");
    for(int i=0;i<nos;i++)
        scanf("%d",&arr[i]);

    int toFind;
    printf("Enter the Element to be Find : ");
    scanf("%d",&toFind);
    int flag = 0;
    for(int i = 0;i<nos;i++)
        if(arr[i] == toFind){
            flag = i+1;
            break;
        }
    if(flag)
        printf("Elements found at Position : %d",flag);
    else
        printf("No Such element Found ");
}