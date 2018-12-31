int *creat_array(int n, int initial_value)
{
	int *ar = malloc(sizeof(int) * n);
	if(ar == NULL) return NULL;
	
	for(int i = 0; i < n ; i++)
		ar[i] = initial_value;
	
	return ar;
	
	
}