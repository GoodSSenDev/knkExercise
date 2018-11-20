#include <stdio.h>

int main()
{
	int input;
	char *pTen[] = {"twenty", "thirty", "forty", "fifty", "sixty",
	"seventy", "eighty", "ninety"};
	char *pTenOne[] = {"eleven", "twelve", "thirteen", "fourteen",
	"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *pOne[] = {"one", "two", "three", "four", "five",
	"six", "seven", "eight", "nine"};
	
	printf("Enter a two-digit number: ");
	scanf("%2d",&input);
	
	if (input >= 20) 
		printf("%s %s",pTen[(input/10)- 2],pOne[(input%10)-1]);
	else
		printf("%s",pTenOne[(input%10)-1]);
	
	return 0;
}