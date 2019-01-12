#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main()
{
	char input = 0;
	Stack s = createStack();
	
	printf("Enther parntheses and/or braces: ");
	make_empty(s);
	while((input = getchar()) != '\n') {
		if(input == '{' ||input == '(' ){
			push(s,input);
		} else checkMatch(s,input);
	}
	if (is_empty(s))
		printf("Parentheses/braces are nested properly\n");
	else {
		printf("there is no closing parentheses/braces\n");
	}
	return 0;
}