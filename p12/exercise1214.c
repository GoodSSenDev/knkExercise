#include <stdio.h>
#include <stdbool.h>

bool search( int a[], int n, int key);// const cause warning
int main()
{
	int temperature [7][24] ={{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4},
							{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4},
							{1,2,3,4,5,6,7,8,32,1,2,3,4,5,6,7,8,9,1,2,3,4}};
	
	int n = 7 * 24;
	int key = 32;
	printf("%d",search(temperature[0],7*24,key));
	
	return 0;
}

bool search( int a[], int n, int key)
{
	int *p;
	
	for (p = a;p < a + n; p++){// const int a[] cause warning about p = a
		if(key == *p) return true;
	}
	return false;
}