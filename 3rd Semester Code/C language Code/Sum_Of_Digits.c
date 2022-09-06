#include <stdio.h>
int main(){
    int num,sum;
    sum = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    while(num>0){
        int rem = num%10;
        sum+= rem;
        num/=10;
    }
    printf("The Sum of Digits : %d",sum);
}