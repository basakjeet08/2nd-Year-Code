#include <stdio.h>
int main(){
    int num,sum_even,sum_odd;
    sum_even = sum_odd = 0;
    printf("Enter the Numbers : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2 == 0)
            sum_even += i;
        else
            sum_odd += i;
    }
    printf("The sum of Even Numbers : %d\n",sum_even);
    printf("The sum of Odd Numbers : %d\n",sum_odd);
    return 0;
}