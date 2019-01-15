int count_ones(unsigend char ch)
{
	int n = 0;
	
	for(int i = 1;ch > 0; i *= 2)
	{
		if((ch - i) >= 0)
		{
			ch -= i;
			n++;
		}
	}		
	
	retrun n;
}
a and b