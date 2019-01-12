#define <stdio.h>
#define <stdlib.h>
#define <stdbool.h>
#define "queue.h"

typedef int Item;

struct node{
	Item content;
	struct node *next;
};

static struct node *first = NULL;
static struct node *last = NULL;
static int numQ = 0;

static void outOfMemory(struct node *m)
{
	if(m == NULL)
	{
		printf("Out of Memory\n");
		exit(EXIT_FAILURE);
	}
}
void inQueue(Item i)
{
	if (first == NULL)
	{
		first = malloc(sizeof(struct node));
		outOfMemory(first);
		first->next = NULL;
		first->content = i; 
		last = first;
		numQ++;
	}
	else
	{
		struct node *temp = malloc(sizeof(struct node));
		outOfMemory(temp);
		temp->content = i;
		temp->next = last;
		last = temp;
		numQ++;
	}
};// insert Queue. stop the programe (by using OutOfMemory) if fail;

Item deQueue()
{
	if(!isEmpty)
	{
		printf("\nNothing on the queue\n");
		return 0;
	}
	Item tempItem = first->content;
	struct node *temp;
	for(temp = last; temp->next->next!=NULL;temp = temp->next);
	
	free(first);
	first = temp;
	numQ--;
	return tempItem;
}
// return first queue that inserted and move the next queue;

Item firstQueue()
{
	return first->content;
}// return first queue that inserted;

Item lastQueue()
{
	return last->content;
}// return last queue that inserted;

bool isEmpty()
{
	if (numQ <= 0) 
		return true;
	else 
		return false;
}// check number of queue is zero if zero return true;
