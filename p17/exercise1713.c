//orignal one
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
	struct node *cur = list, *prev = NULL;
	while (cur->value <= new_node->value) {
		prev = cur;
		cur = cur->next;
	}
	prev->next = new_node;
	new_node->next = cur;
	return list;
}

//new one
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
	struct node *cur = list, *prev = NULL;
	while (cur->value <= new_node->value) {
		prev = cur;
		cur = cur->next;
	}
	if(list == NULL)//we have to consider that list is empty.
		return new_node;
	else if(prev == NULL)// we also have to cosider that new_node is smallest node.
	(
		new_node->next = cur;
		return new_node;
	)
	else
	(
		prev->next = new_node;
		new_node->next = cur;
	)
	return list;
}