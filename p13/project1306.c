#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
	char *planets[] = {"mercury", "venus", "earth", "mars", "jupiter",
	"saturn", "uranus", "neptune", "pluto"};
	
	int i, j, k, n;
	
	for (i = 1; i < argc; i++) {
		for (j = 0; j < NUM_PLANETS; j++){
			for(k = strlen(argv[i])+ 1,n=0;tolower(*(argv[i]+n)) == *(planets[j]+n) ;k--, n++);//set k as amount of space has chararcter
			if(k ==0){																		   // k will become 0 if every thing is same						
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		}
		if (j == NUM_PLANETS)
			printf("%s is not a planet\n", argv[i]);
	}
	
	return 0;
}