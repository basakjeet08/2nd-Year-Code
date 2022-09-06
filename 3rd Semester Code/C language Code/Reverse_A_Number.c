#include <stdio.h>
int main(){
    int num,new_num;
    new_num = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);

    while(num>0){
        int rem = num%10;
        new_num = new_num*10 + rem;
        num/= 10;
    }
    printf("The Reversed Number : %d",new_num);
}