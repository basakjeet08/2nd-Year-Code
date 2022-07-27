#include <stdio.h>
#include <math.h>
int main(){
    int num, i;
    int storage[32] = {};
    printf("Enter a number: ");
    scanf("%d", &num);
    i = 31;
    while (num!=0){
        storage[i] = num%2;
        num /= 2;
        i--;
    }
    int count = 1;
    for(int j = 0;j<=24;j+=8){
        int new_num = 0;

        for(int k = j;k<(j+8);k++)
            new_num += storage[k]*pow(2,(j+7-k));
            
        printf("The content of B%d is %d \n",count,new_num);
        count++;
    }
    return 0;
}