void censor(char *p)
{
	while(*(p+3)){
		if((*p == 'f') && ('o' == *(p + 1))&&('o' == *(p + 2)))
			strncpy(p,"xxx",3);
		p++;
	}
}