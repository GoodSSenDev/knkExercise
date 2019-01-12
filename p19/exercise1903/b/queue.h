#ifndef QUEUEADT_H
#define QUEUEADT_H


typedef int Item;


bool inQueue(Item i);// insert Queue. return false if fail;

Item deQueue();// return first queue that inserted and move the next queue;

Item firstQueue();// return first queue that inserted;

Item lastQueue();// return last queue that inserted;

bool isEmpty();// check number of queue is zero if zero return true;

#endif