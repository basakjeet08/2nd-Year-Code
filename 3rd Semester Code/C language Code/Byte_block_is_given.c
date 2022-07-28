#include <stdio.h>
#include <math.h>
int main(){
    int storage_1880[32] = {0};
    int count = 1;    
    for(int i = 0 ; i<=24 ; i+=8){
        printf("Enter the Elements of B%d with spaces : ",count);
        for(int j = i;j<(i+8);j++)
            scanf("%d",&storage_1880[j]);
        count++;
    }
    int decimal_number = 0;
    for(int i = 0;i<32;i++)
        decimal_number = decimal_number + storage_1880[i]*pow(2,(31-i));

    printf("The Required Number : %d",decimal_number);
    return 0 ;
}