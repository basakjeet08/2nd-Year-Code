#include <stdio.h>
int main(){
    int num,temp,sum;
    sum = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        int rem = num%10;
        sum += rem*rem*rem;
        num/= 10;
    }
    if(sum == temp)
        printf("The Number is an Armstrong Number !!");
    else
        printf("The Number is not an Armstrong Number !!");
    return 0;
}