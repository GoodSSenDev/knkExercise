int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

struct fraction {
	int numerator;
	int denominator;
}

a)

struct fraction reduce(struct fraction f)
{
	return (struct fraction) {.numerator = f.numerator / gcd(f.numerator, f.denominator),
					.denominator = f.denominator / gcd(f.numerator, f.denominator)}
}

b)

struct fraction add(struct fraction f1, struct fraction f2)
{
	return (struct fraction) {.numerator = (f1.numerator * f2.denominator) 
					+ (f2.numerator * f1.denominator),
					.denominator = (f1.denominator * f2.denominator)};			
}

c)

struct fraction subt(struct fraction f1, struct fraction f2)
{
	return (struct fraction) {.numerator = (f1.numerator * f2.denominator) 
					- (f2.numerator * f1.denominator),
					.denominator = (f1.denominator * f2.denominator)};			
}

d)

struct fraction multi(struct fraction f1, struct fraction f2)
{
	return (struct fraction) {.numerator = f1.numerator  * f2.numerator,
					.denominator = (f1.denominator * f2.denominator)};			
}

e)

struct fraction divide(struct fraction f1, struct fraction f2)
{
	return (struct fraction) {.numerator = (f1.numerator  * f2.denominator),
					.denominator = (f1.denominator * f2.numerator)};			
}
