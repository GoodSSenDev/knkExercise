#include <stdio.h> // this is not the project 2 from ch 12
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


bool checkLetter(char *ch, char *pch);
int main()
{
	char cch[100] = {0};
	char *p;
	char temp;
	
	printf("Enter a message: ");
	
	p = cch;
	do{
		temp = getchar();
		temp = toupper(temp);
		if (temp >= 'A' || temp <='Z' || temp == ' ' ){
			*p = temp;
			p++;
		}
		printf("during p = %c", *(p - 1));
		
	}while(temp != '\n');
	

	p--;
	p--;
	printf("p =%c\n", *p);
	if(checkLetter(cch,p))
		printf("Palindrome");
	else
		printf("Not a palindrome");
	
	return 0;
}

bool checkLetter(char *ch, char *pch)
{
	while(*ch != ' ' || *pch != ' '){
		printf("1ch =%c, ch =%c\n", *ch, *pch);
		if(toupper(*ch) != toupper(*pch)){
			printf("2ch = %c, ch = %c\n", *ch, *pch);
			return false;
		}
		ch++;
		pch--;
	}
	return true;
}