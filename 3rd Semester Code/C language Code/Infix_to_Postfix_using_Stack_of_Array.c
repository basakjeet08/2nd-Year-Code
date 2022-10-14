#include<stdio.h>
#include<ctype.h>     
#include<string.h>
char stack[100];
int top = -1;
void push(char x){
	if(top >= 99){
		printf("\nSTACK OVERFLOW");
    }
	else{
		top ++;
		stack[top] = x;
	}
}
char pop(){
	char x;
	if(top == -1){
		printf("\nSTACK UNDERFLOW");
		exit(1);
	}
	else{
		x = stack[top];
		top--;
		return x;
	}
}

int isOperator(char sym){
	if(sym == '^' || sym == '*' || sym == '/' || sym == '+' || sym =='-')
		return 1;
	return 0;
}
int precedence(char sym) {
	if(sym == '^')
		return 3;
	else if(sym == '*' || sym == '/')
		return 2;
	else if(sym == '+' || sym == '-')         
		return 1;
	else
		return 0;	
}
void convert(char infix[], char postfix[]){ 
	int i, j;
	char x, rem;
	push('(');                               
	strcat(infix,")");                
	i=0;
	j=0;
	x=infix[i];      
	while(x != '\0'){
		if(x == '(')
			push(x);
		else if( isdigit(x) || isalpha(x)) {
			postfix[j] = x;              
			j++;
		}
		else if(isOperator(x)){
		    rem = pop();
			while((isOperator(x)) && (precedence(rem) >= precedence(x))){
				postfix[j] = rem;                  
				j++;
				rem = pop();                    
			}
			push(rem);
			push(x);                 
        }

		else if(x == ')'){
			rem = pop();                
			while(rem != '('){
				postfix[j] = rem;
				j++;
				rem = pop();
			}
		}
		else{
			printf("\nInvalid infix Expression.\n");      
			return;
		}
		i++;
		x = infix[i]; 
	}
	if(top > -1) {
		printf("\nInvalid infix Expression.\n");
		return;
	}

	postfix[j] = '\0'; 
}

int main()
{
	char infix[100], postfix[100];        
	printf("\nEnter Infix expression : ");
	gets(infix);

	convert(infix,postfix);                   
	printf("Postfix Expression: ");
	puts(postfix);                   

	return 0;
}