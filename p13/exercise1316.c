int count_spaces(const char *s)
{
	int count = 0;
	
	while(*s++) count++;
	
	return count;
}