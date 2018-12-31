void *my_malloc(size_t size){
	
	void *adr = malloc(size);
	
	if(adr == NULL)
	(
		printf("Memory allocate error\n");
		exit(EXIT_FAILURE);
	)
	return adr;
}