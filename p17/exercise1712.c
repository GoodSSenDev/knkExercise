struct node *find_last(struct node *list, int n)
{
	struct node *last = NULL;
	
	for(;list != NULL; list = list->next)
		if(list->value == n)
			last = list;
		
	return last;
}