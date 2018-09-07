#include <stdio.h>

void pay_amount (int dollars, int *twenties, int *tens ,
				int *fives, int *ones);
int main()
{
	int dollars, tw, t, f, o;
	printf("Enter s dollar amount: ");
	scanf("%d", &dollars);
	
	pay_amount(dollars, &tw, &t, &f, &o);
	
	printf("\n$20 bills: %d\n", tw);
	printf("$10 bills: %d\n", t);
	printf(" $5 bills: %d\n", f);
	printf(" $1 bills: %d\n", o);
}

void pay_amount (int dollars, int *twenties, int *tens ,int *fives, int *ones)
{
	*twenties = dollars / 20;
	*tens = (dollars % 20) /10;
	*fives = ((dollars % 20) % 10 ) / 5 ;
	*ones = (((dollars % 20) % 10 ) % 5) / 1 ; 
}