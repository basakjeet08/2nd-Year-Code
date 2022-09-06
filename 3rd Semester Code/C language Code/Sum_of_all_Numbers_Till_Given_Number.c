#include <stdio.h>
int main(){
    int num,sum = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        sum+= i;
    printf("The Sum : %d",sum);
}