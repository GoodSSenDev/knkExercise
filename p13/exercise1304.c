a)
int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while(getchar() == ' '); // skip space before start input
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return 0;
}

b)
int read_line(char str[], int n)
{
	int ch, i = 0;
	
	
	while (isspace(ch = getchar()) == 0) // isspace return 0 when char is  NOT a white space character
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return 0;
}

c)
int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i++] = '\n'; // put \n at the end of str
	str[i] = '\0';  // put \n at the end of str
	return 0;
}