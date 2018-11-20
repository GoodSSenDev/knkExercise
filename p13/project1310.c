#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main()
{
	char fName[100];
	printf("Enter a first and last name: ");
	gets(fName);
	
	reverse_name(fName);
	printf("%s.", fName);
	
	return 0;
}

void reverse_name(char *name)
{
	char *p = name;
	char fLetter[2] = " ";
	char lName[100];
	
	strncpy(fLetter, p,1);
	p++; // skip first capital
	while(*p > '[')p++;// find when next capital or spaces
	while(*p == ' ')p++;//skip any spaces after first name
	strcpy(lName, p);
	strcpy(name, p);
	strcat(name, ", ");
	strcat(name, fLetter);
	
}