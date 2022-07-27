#include <stdio.h>
#include <math.h>
int main(){
    int storage[32] = {0};
    int count = 1;    
    for(int i = 0 ; i<=24 ; i+=8){
        printf("Enter the Elements of B%d with spaces : ",count);
        for(int j = i;j<(i+8);j++)
            scanf("%d",&storage[j]);
        count++;
    }
    int sum = 0;
    for(int i = 0;i<32;i++)
        sum = sum + storage[i]*pow(2,(31-i));

    printf("The Required Number : %d",sum);
    return 0 ;
}