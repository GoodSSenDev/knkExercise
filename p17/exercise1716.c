int sum (int (*f)(int), int start, int end)
{
	int sum;
	while(start <= end)
	{
		sum += (*f)(start)
		start++;
	}
	return sum;
}