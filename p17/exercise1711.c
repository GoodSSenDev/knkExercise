int count_occurrences(struct node *list, int n)
{
	int i = 0;
	for(;list != NULL; list = list->next)
		if(list->value = n)i++;
	
	return i;
}