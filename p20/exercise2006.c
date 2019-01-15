a)
#include <stdio.h>


unsigned short swap_bytes(unsigned short i)
{
	return ((i >> 8) | (i << 8));
}

int main()
{ 
	
	unsigned short i;
	
	printf("Enter a hexadecimal number (up to four digit):");
	scanf("%hx",&i);
	
	printf("Number with bytes swapped: %hx\n", swap_bytes(i));
	
	return 0;
}

b)

unsigned short swap_bytes(unsigned short i)
{
	return ((i >> 8) | (i << 8));
}