#include <stdio.h>
#include <math.h>
int main(){
    int num;
    long long int binary;
    binary = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);

    while(num>0){
        int rem = num%2;
        binary = binary*10 + rem;
        num/= 2;
    }
    printf("The Binary : %ld\n",binary);
    int count = 0;
    while(binary>0){
        int rem = binary%10;
        num = num + rem*(pow(2,count));
        count++;
        binary/= 10;
    }
    printf("The Number was : %d",num);
}