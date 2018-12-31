struct node *delete_from_list(struct node *list, int n)
{
	struct node *prev;
	
	for(prev->next = list;
		prev->next != NULL && prev->next.value != n;
		prev = prev->next, prev->next = prev->next.next)
		;
		
	if(prev->next == NULL)
		return list;
	if(prev->next == list)
		list = list->next;
	else	
		prev->next = prev->next.next;
	free(prev->next);
	return list;
}