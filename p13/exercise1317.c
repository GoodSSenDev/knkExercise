bool text_extension(const char *file_name, const char *extension)
{
	while(*file_name++ != '.');
	while(toupper(*file_name) == toupper(*extension)){
		if(*file_name == '\0') return true;
		file_name++;
		extension++;
	}
	return false; // if anything pass that requirement means, it is not same
}