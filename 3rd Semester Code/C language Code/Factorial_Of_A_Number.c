#include <stdio.h>
int main(){
    int num;
    int fact = 1;
    printf("Enter the Number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        fact = fact*i;
    printf("The Factorial : %d",fact);
}