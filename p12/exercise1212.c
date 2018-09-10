void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	int *p;
	largest = a;
	second_largest = a;
	for(p = a; p < a + n; p++){
		if(*p > *second_largest){
			if(*p > *largest)
				largest = p;
			else second_largest = p;
		}	
	}
}