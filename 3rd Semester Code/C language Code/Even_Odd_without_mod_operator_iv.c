#include <stdio.h>

int main(){
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    if((num ^ 1) ==num+1)
        printf("Even");
    else
        printf("Odd");

    return 0;
    
}