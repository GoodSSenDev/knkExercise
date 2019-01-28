int line_length(const char *filename, int n)
{
	if (NULL == fopen(filename,"r"))
	{
		fprintf(stderr, "Can not open %s \n", *filename);
		return 0;
	}
	
	n++;
	while(n)
	{
		int ch = 0;
		if(NULL == (ch = getc(filename)))
			return 0;
		if('\x0a' == ch)
			n--;	
	}
	for(n = 0;((getc(filename) != '\X0a')||(getc(filename) != '\X0d')); n++);
	
	return n;
	
}	