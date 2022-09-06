#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size of The arrays : ");
    scanf("%d",&size);
    int num1[size] , num2[size] , result[size];
    printf("Enter the Elements of Array 01 : ");
    for(int i=0;i<size;i++)
        scanf("%d",&num1[i]);
    printf("Enter the Elements of Array 02 : ");
    for(int i=0;i<size;i++)
        scanf("%d",&num2[i]);
    
    for(int i=0;i<size;i++)
        result[i] = num1[i] + num2[i];
    printf("The Resultant Array : ");
    for(int i=0;i<size;i++)
        printf("%d ",result[i]);
}