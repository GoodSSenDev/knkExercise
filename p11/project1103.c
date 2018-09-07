#include <stdio.h>

void reduce(int numerator, int denominator, 
			int *reduced_numerator, int *reduced_denominator);
int gcc(int m, int n);

int main()
{
	int i, j,ri,rj;
	printf("Enter a fraction(n/d): ");
	scanf("%d/%d",&i,&j);
	reduce(i,j,&ri,&rj);
	printf("In lowest terms: %d/%d\n", ri, rj);
	
	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int GCD = gcd(numerator, denominator);
	*reduced_numerator = numerator / GCD;
	*reduced_denominator = denominator / GCD;
}

int gcd(int m, int n) {
	int temp;
	if (m < n) {
		temp = m;
		m = n;
		n = temp;
	}
	while (n > 0) {
		temp = m % n;
		m = n;
		n = temp;
	}
	return m;
}