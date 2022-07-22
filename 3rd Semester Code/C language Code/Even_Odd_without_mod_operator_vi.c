#include <stdio.h>
int main(){
    int num,new_num;

    printf("Enter the Numbers : ");
    scanf("%d",&num);

    new_num = num>>1;
    if(new_num << 1==num)
        printf("Even");
    else
        printf("Odd");


}