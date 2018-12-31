#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *duplicate(const char *str);

int main()
{
	char str[] = "ha!";
	
	printf("%s and %s \n",str, duplicate(str));
	
	return 0;
}

char *duplicate(const char *str)
{
	char *copy = malloc(strlen(str) + 1);
	strcpy(copy, str);
	
	return copy;
}