#include <stdio.h>
int main(){
    char operand;
    int num1 , num2;
    float result;
    printf("Enter two Operands (a,b) : ");
    scanf("%d %d",&num1 , &num2);
    getchar();
    printf("Enter the Operation (+,*,-,/,%%) : ");
    scanf("%c",&operand);

    switch(operand){
        case '*' :
            result= num1*num2;
            break;
        case '/' : 
            result= (float)num1 / num2;
            break;
        case '+' : 
            result = num1+num2;
            break;
        case '-' : 
            result = num1-num2;
            break;
        case '%' : 
            result = num1%num2;
            break;
        default :
            printf("Wrong Input !!");
    }
    printf("The Result : %f",result);
    return 0;
}