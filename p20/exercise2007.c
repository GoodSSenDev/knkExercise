unsigned int rotate_left(unsigned int i, int n)
{
	return i << n | i >> ((8 * sizeof(int)) - n);
} 

unsigned int rotate_left(unsigned int i, int n)
{
	return i >> n | i << ((8 * sizeof(int)) - n);
} 