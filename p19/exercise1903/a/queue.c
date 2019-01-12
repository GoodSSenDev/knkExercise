// this code is incomplete
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

#define QUEUE_SIZE 100

//typedef int Item; -in the header


static Item content[QUEUE_SIZE];
static int first = 0;
static int last = 0;
static int numQ = 0;


bool inQueue(Item i)
{
	if(numQ >= QUEUE_SIZE)
	{
			printf("\nError Queue is full.\n");
			return false;
	} 
	
	if(last >= QUEUE_SIZE)// when "last" reaches QUEUE_SIZE it swaps the position of the queue in the array. ex a[0] = a[7] a[1] = a[8]
	{
		for(int j = (last-first); j > 0; j--)
			content[j - 1] = content[first + j];
		last = (last - first) - 1;
		first = 0;
	}
	
	content[last] = i;
	printf("ang %d last: %d\n",content[last], last);
	last++;
	numQ++;
	return true;
	
}// return false if fail

Item deQueue()
{
	if(!isEmpty)
	{
		printf("\nError There is no more Queue.\n");
		return 0;
	}
	numQ--;
	return content[first++]; 
}
Item firstQueue()
{
	return content[first];
}

Item lastQueue()
{
	return content[last-1];
}
bool isEmpty(){
	if (numQ == 0)
		return true;
	else 
		return false;
}