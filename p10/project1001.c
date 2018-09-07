#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define STACK_SIZE 100

// external variables
char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
int checkMatch(char obj);

int main()
{
	char input = 0;
	
	printf("Enther parntheses and/or braces: ");
	make_empty();
	while((input = getchar()) != '\n') {
		if(input == '{' ||input == '(' ){
			push(input);
		} else checkMatch(input);
	}
	if (top == 0)
		printf("Parentheses/braces are nested properly\n");
	else {
		printf("there is no closing parentheses/braces\n");
	}
	return 0;
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
void push(char i)
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
int checkMatch(char obj)
{
	if(obj == '}' ){
		if (pop() != '{'){
			printf("Parenetheses/braces are not nested properly \n");
			exit(1);
		}
	}else if(obj == ')' ){
		if (pop() != '('){
			printf("Parenetheses/braces are not nested properly \n");
			exit(1);
		}
	}else{
		printf("Wrong input\n");
		exit(1);
	}
	return 0;
}