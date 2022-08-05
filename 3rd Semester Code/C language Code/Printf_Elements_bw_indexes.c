#include <stdio.h>
int main(){
    printf("Enter the Number of Elements : ");
    int nos;
    scanf("%d", &nos);
    int arr[nos];
    printf("Enter the Elements of Array : ");
    for(int i=0;i<nos;i++)
        scanf("%d",&arr[i]);
    int lb,ub;
    printf("Enter the Lower Bound Element : ");
    scanf("%d",&lb);
    printf("Enter the Upper Bound Element : ");
    scanf("%d",&ub);
    int isValid = 0;
    for(int i=0;i<nos;i++){
        if(arr[i] == lb)
            isValid = 1;
        if(isValid)
            printf("%d ",arr[i]);
        if(arr[i] == ub)
            break;
    }
    return 0;
}