void remove_filename(char *url)
{
	while(*url) url++;
	while(*url != '/') url--;
	*url = '\0';
}