#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
    q->values = new unsigned int[size];
    q->capacity = size;
    q->count = 0;
}

void cleanQueue(Queue* q)
{
    delete[] q->values;
    q->values = 0;
    q->capacity = 0;
    q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        return;
    }

    q->values[q->count] = newValue;
    q->count++;
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    unsigned int value = q->values[0];

    for (unsigned int i = 1; i < q->count; i++)
    {
        q->values[i - 1] = q->values[i];
    }

    q->count--;
    return static_cast<int>(value);
}

bool isEmpty(Queue* q)
{
    return q->count == 0;
}

bool isFull(Queue* q)
{
    return q->count == q->capacity;
}
