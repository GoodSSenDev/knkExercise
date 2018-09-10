#include <stdio.h>
#include <stdbool.h>

bool search( int a[], int n, int key);// const cause warning
int main()
{
	int temperature [7][24] ={{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6},
							{1,2,3,4,5,6,7,8,32,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6}};
	
	int n = 24, i;
	int key = 32;
	for(i = 0;i < 7;i++){
		printf("%d",search(temperature[i],n,key));
		printf("\n");
	}
	
	return 0;
}

bool search( int a[], int n, int key)
{
	int *p;
	
	for (p = a;p < a + n; p++){// const int a[] cause warning about p = a
		printf("%d ,",*p);
	}
	return false;
}