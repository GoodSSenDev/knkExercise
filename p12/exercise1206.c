int sum_array(const int a[], int n)
{
	int *pa, sum;
	
	sum = 0;
	for (pa =&a[];  pa < &a[n]; pa++ )
		sum += *pa;
	return sum;
}