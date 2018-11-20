int strcmp (char * s, char *t)
{
	int i;
	
	while(s++ == t++)
		if (s == '\0')
			return 0;
	return s - t;
}