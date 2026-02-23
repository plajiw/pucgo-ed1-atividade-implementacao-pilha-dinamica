#include <stdlib.h>
#ifndef NODE_H
#define NODE_H

typedef struct node
{
    int data;
    struct node *nextNode;
} Node;

Node *createNode(int item, Node *ptr)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode != NULL)
    {
        newNode->data = item;
        newNode->nextNode = ptr;
    }
    return newNode;
}

#endif