#include <stdio.h>
int main(){    
    int num1=0,num2=1,num3,range;    
    printf("Enter the number of elements:");    
    scanf("%d",&range);    
    printf("\n%d %d",num1,num2);
    for(int i=2;i<range;++i){    
        num3=num1+num2;    
        printf(" %d",num3);    
        num1=num2;    
        num2=num3;    
    }  
    return 0;  
}