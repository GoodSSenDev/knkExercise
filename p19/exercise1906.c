a)
Item peek(Stack s)
{
	if(!isEmpty)
	{
		printf("nothing on the Stack\n");
		return 0;
	}
	return s->content[top];
}
b)
Item peek(Stack s)
{
	if(!isEmpty)
	{
		printf("nothing on the Stack\n");
		return 0;
	}
	return s->content[top];
}
c)
Item peek(Stack s)
{
	if(!isEmpty)
	{
		printf("nothing on the Stack\n");
		return 0;
	}
	return s->top->data;
}