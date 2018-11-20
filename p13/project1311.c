#include <stdio.h>
#include <string.h>

double compute_average_word_length(const char *sentence);

int main()
{
	char word[100];
	
	printf("Enter a sentence: ");
	gets(word);
	
	printf("Average word lenght: %0.1lf",compute_average_word_length(word));
	
	return 0;
}

double compute_average_word_length(const char *sentence)
{
	double nSpace = 0, nChar = 0;
	while(*sentence)
	{
		nChar++;
		if(*sentence < 33) nSpace++;
		sentence++;
	}
	return ((nChar - nSpace)/(nSpace + 1)); //nSpace + 1 = number of words
}