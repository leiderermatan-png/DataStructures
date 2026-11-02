#include "LinkedList.h"

void initList(LinkedList* list)
{
    list->head = 0;
}

void addToHead(LinkedList* list, unsigned int value)
{
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = list->head;
    list->head = newNode;
}

int removeFromHead(LinkedList* list)
{
    if (isListEmpty(list))
    {
        return -1;
    }

    Node* nodeToDelete = list->head;
    unsigned int value = nodeToDelete->value;
    list->head = nodeToDelete->next;
    delete nodeToDelete;

    return static_cast<int>(value);
}

bool isListEmpty(LinkedList* list)
{
    return list->head == 0;
}

void cleanList(LinkedList* list)
{
    while (!isListEmpty(list))
    {
        removeFromHead(list);
    }
}
