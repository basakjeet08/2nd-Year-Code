#include <stdio.h>
#include <math.h>
int main(){
    int num,flag;
    flag = 0;
    printf("Enter the Number to Check : ");
    scanf("%d",&num);
    for(int i=2;i<=sqrt(num);i++){
        if(num%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("The Number is Not a prime Number\n");
    else
        printf("The Number is a prime Number\n");
}