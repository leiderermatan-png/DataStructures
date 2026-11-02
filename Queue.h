#ifndef QUEUE_H
#define QUEUE_H

/* a queue contains positive integer values. */
typedef struct Queue
{
    unsigned int* values;
    unsigned int capacity;
    unsigned int count;
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q);

bool isEmpty(Queue* q);
bool isFull(Queue* q);

#endif
