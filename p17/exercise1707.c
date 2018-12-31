for (p = first; p != NULL; p = p->next)
	free(p);
The loop is incorrect because once the loop free the p at we can not use p->next because p becomes dangling pointer which 
p = p->next will cause undefined effect.