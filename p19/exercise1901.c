#ifndef QUEUEADT_H
#define QUEUEADT_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type *Queue;

bool insertQueue(Queue q,Item i);// return false if fail
Item removeQueue(Queue q);
Item firstQueue(Queue q);
Item lastQueue(Queue q);
bool isEmpty(Quese q);

#endif