#include <stdio.h>
#include <math.h>
int main(){
    int number_1880, i;
    int storage_1880[32] = {};
    printf("Enter a number: ");
    scanf("%d", &number_1880);
    i = 31;
    while (number_1880!=0){
        storage_1880[i] = number_1880%2;
        number_1880 /= 2;
        i--;
    }
    int count = 1;
    for(int j = 0;j<=24;j+=8){
        int block_decimals = 0;

        for(int k = j;k<(j+8);k++)
            block_decimals += storage_1880[k]*pow(2,(j+7-k));
            
        printf("The content of B%d is %d \n",count,block_decimals);
        count++;
    }
    return 0;
}