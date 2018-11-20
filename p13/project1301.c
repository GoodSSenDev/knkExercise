#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
	char temp[20],largest[20]="",smallest[20] = "zzzzzzzzzzzzzzzzzz";
	
	do{
		printf("Enter word: ");
		scanf("%s",temp);
		
		if(strcmp(temp,largest) > 0) 
			strcpy(largest,temp);
		else if(strcmp(temp,smallest) < 0)
			strcpy(smallest,temp);
	}while(4 != strlen(temp));
	printf("Smallest word: %s\nLargest word: %s", smallest, largest);

	return 0;
}
