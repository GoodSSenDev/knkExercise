#include <stdio.h>
#include <string.h>

int compute_vowel_count(const char *word);

int main()
{
	char word[100];
	
	printf("Enter a sentence: ");
	gets(word);
	
	printf("Your sentence contains %d vowels.",compute_vowel_count(word));
	
	return 0;
} 

int compute_vowel_count(const char *word)
{
	int count = 0;
	while(*word)
	{
		if(toupper(*word) == 'A'||toupper(*word) == 'E'
		||toupper(*word) == 'I'||toupper(*word) == 'O'
		||toupper(*word) == 'U')
			count++;
		word++;
	}	
	
	return count;
}