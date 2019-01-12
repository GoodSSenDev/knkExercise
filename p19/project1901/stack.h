#ifndef STACK.H
#define STACK.H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define STACK_SIZE 100

typedef struct stack_type *Stack;

Stack createStack(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, char i);
int pop(Stack s);
static void stack_overflow(void);
static void stack_underflow(void);
int checkMatch(Stack s,char obj);

#endif