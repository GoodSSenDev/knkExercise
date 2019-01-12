#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

struct stack_type {
    char contents[STACK_SIZE];
    int top;
};

Stack createStack(Stack s)
{
	s = malloc(sizeof(struct stack_type));
	
	return s;
}
void make_empty(Stack s)
{
	return s->top = 0;
}

void push(Stack s,char i)
{
	if (is_full(s))
		stack_overflow();
	else
		s->contents[top++] = i;
}

int pop(Stack s)
{
	if (is_empty(s))
		stack_underflow();
	else
		return s->contents[--s->top];
}

static void stack_overflow(void)
{
	printf("Stack Overflow\n");
	exit(1);
}

static void stack_underflow(void)
{
	printf("Stack Underflow\n");
	exit(1);
}

bool is_empty(Stack s)
{
	return s->top == 0;
}

bool is_full(Stack s)
{
	return top == STACK_SIZE;
}

int checkMatch(char obj)
{
	if(obj == '}' )
	{
		if (pop() != '{')
		{
			printf("Parenetheses/braces are not nested properly \n");
			exit(1);
		}
	}
	else if(obj == ')' )
	{
		if (pop() != '(')
		{
			printf("Parenetheses/braces are not nested properly \n");
			exit(1);
		}
	}
	else
	{
		printf("Wrong input\n");
		exit(1);
	}
	return 0;
}