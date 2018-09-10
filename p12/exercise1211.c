int find_largest(int a[], int n)
{
	int *p;
	int max = a[0];
	
	for (p = a; p < a + n; p++){
		if (*p > max)
			max = *p;
	}
	return
}