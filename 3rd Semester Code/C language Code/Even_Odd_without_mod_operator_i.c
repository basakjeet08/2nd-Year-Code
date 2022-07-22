#include <stdio.h>
int main(){
    int num,new_num;

    printf("Enter the Numbers : ");
    scanf("%d",&num);

    new_num = (num/2)*2;
    if(num==new_num)
        printf("Even");
    else
        printf("Odd");


}