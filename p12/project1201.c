#include <stdio.h>

int main()
{
	char ch[100] = {0};
	char *p;
	printf("Enter a message: ");
	
	p = ch;
	do{
		*p =getchar();
		p++;
	}
	while(*(p-1)!= '\n');
	
	printf("Reversal is: ");
	--p;
	--p; // prevent starting at '\n' and '\0'
	for(;p >= ch ;p--)
		printf("%c", *p);
	
	return 0;
}