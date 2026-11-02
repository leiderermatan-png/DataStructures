#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node
{
    unsigned int value;
    Node* next;
};

typedef struct LinkedList
{
    Node* head;
} LinkedList;

void initList(LinkedList* list);
void addToHead(LinkedList* list, unsigned int value);
int removeFromHead(LinkedList* list);
bool isListEmpty(LinkedList* list);
void cleanList(LinkedList* list);

#endif
