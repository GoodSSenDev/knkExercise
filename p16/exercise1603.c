a)
struct complex {
	double real;
	double imaginary;
};

b)
struct complex c1,c2,c3;

c)
struct complex make_complex(double a, double b)
{
	return (struct complex) {.real = a, .imaginary = b}; 
}

d)
struct complex add_complex (struct complex n1, struct complex n2)
{
	return (struct complex) {n1.real + n2.real,
							n1.imaginary + n2.imaginary};
}