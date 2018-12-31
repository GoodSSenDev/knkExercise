int compare_parts(const void *p, const void *q)
{
	return (-1 * ((struct part *) p)->number - 
			((struct part *) q)->number);
}