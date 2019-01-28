a)

char *sfgets(char * restrict s ,int n ,FILE * restrict stream)
{
	for(int i = 0; i < n; i++)
	{
		if ((s[i] = getc(stream)) == EOF) return NULL;
	}		
	return s;
}

b)
			
int sfputs(char * restrict s ,FILE * restrict stream)
{
	for(int i = 0;s[i] != '\0'; i++)
	{
		if (EOF == putc(s[i],stream)) return EOF;
	}		
	return 0;
}
	
int fput_string(const char *s, FILE *stream)
{
  while (*s != '\0') {
    if (putc(*s, stream) == EOF)
      return EOF;
    s++;
  }

  return 0;
}