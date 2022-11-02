#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int stack[100];
int top = -1;
void push(int ele){
	stack[++top] = ele;
}
int pop(){
	int ele = stack[top--];
	return ele;
}
int evaluatePostfix(char *ch){
	int val1, val2, res;
	while (*ch != '\0'){
		if (isdigit(*ch))
			push(*ch - '0');
		
		else{
			val1 = pop();
			val2 = pop();
			switch(*ch){
				case '+':
					res = val1 + val2;
					break;
				case '-':
					res = val2 - val1;
					break;
				case '*':
					res = val2 * val1;
					break;
				case '/':
					res = val2 / val1;
					break;
				default:
					printf("INVALID INPUT\n");
					exit(1);
            }
			push(res);
		}
		ch++;
	}
	return pop();
}
int main(){
	char expression[100];
	printf("Enter Expression :  ");
	scanf("%s", expression);
	int result = evaluatePostfix(expression);
	printf("The result : %s" , result);
	return 0;
}