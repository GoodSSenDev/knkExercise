#include <stdio.h>
#include <string.h>

int main()
{
	char sentence[30][20];
	int i = 0 ,n = 0;
	printf("Enter a sentence: ");
	for(char temp = 0; temp != '\n';i++){
		scanf("%s%c",sentence[i],&temp);
		if (strcmp(sentence[i],"can") == 0)strcpy(sentence[i],"can't"); 
		else if (strcmp(sentence[i],"can't") == 0)strcpy(sentence[i],"can");
	}
	
	while(i--)
		printf("%s ",sentence[n++]);
	
	return 0;
}	