#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100
// external value
int top = 0;
int contents[STACK_SIZE];

//stack prototype
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
int calculate(void);

int main()
{
	for(;;){
		printf("Enter an RPN expression: ");
		printf("Value of expression: %d\n", calculate());
	}
	
	return 0;
}

int calculate(void)
{
	char ch = 0 ;
	int op2 = 0 ;
	make_empty();
	do{
		scanf(" %c", &ch); 
		op2 = 0;
		switch(ch){
			case '0':		push(0);break;
			case '1':		push(1);break;
			case '2':		push(2);break;
			case '3':		push(3);break;
			case '4':		push(4);break;
			case '5':		push(5);break;
			case '6':		push(6);break;
			case '7':		push(7);break;
			case '8':		push(8);break;
			case '9':		push(9);break;
			case '+':		op2 = pop();
							push(pop() + op2);
							break;
			case '-':		op2 = pop();
							push(pop() - op2);
							break;
			case '/':		op2 = pop();
							push(pop() / op2);
							break;
			case '*':		op2 = pop();
							push(pop() * op2);
							break;
			case '=':		scanf("%c", &ch);
							break;
			default:		printf("Wrong input");
							break;
		}
	}while(ch != '\n');
	return pop();
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}
void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
	printf("Stack Overflow\n");
	exit(1);
}

void stack_underflow(void)
{
	printf("Stack Underflow\n");
	exit(1);
} 