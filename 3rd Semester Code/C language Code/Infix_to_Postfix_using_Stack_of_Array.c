#include <stdio.h>
#include <string.h>
void convert(char* );
int push(char* , int , char );
char pop(char* , int* );
int main(){
    char infix_exp[30];
    printf("Enter the Infix Expression : ");
    gets(infix_exp);
    strcat(infix_exp,")");
    convert(infix_exp);
}
void convert(char* infix){
    int top = -1 ;
    char stack[30];
    char Postfix[30];
    top = push(stack, top , '(');
    while(*infix != '\0'){
        
    }
}
int push(char* stack , int top , char value){
    if(top == 29){
        printf("Overflow \n");
        return top ;
    }
    top++ ;
    *(stack+top) = value ;
    return top ;
}
char pop(char* stack , int *top){
    if(*top == -1){
        printf("UnderFlow \n");
        return ' ';
    }
    *(top--);
    return *(stack+*(top+1)); 8
}