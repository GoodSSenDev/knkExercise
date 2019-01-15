

unsigned int reversed_bits(unsigned int n)
{
	unsigned int revN = 0;
	for(int i = 31; i >= 0 ;i--)
		if((n - pow(2,i)) >= 0)
		{
			n -= pow(2,(i));
			revN += (1 << (31-i));
		}
		
	
	return revN;
}

//I tested, it is working correctly, but to use 'pow' function we need to include math.h header.