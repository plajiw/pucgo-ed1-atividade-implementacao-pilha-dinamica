#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void initStack(Stack* p)
{
    p->top = NULL;
    p->size = 0;
}

void destroyStack(Stack* p)
{
    makeEmpty(p);
}

bool isEmpty(Stack* p)
{
    return p->top == NULL ? true : false;
}

int top(Stack* p)
{
    if (!isEmpty(p))
        return p->top->value;
    else
        return 0;
}

void makeEmpty(Stack* p)
{
    while (!isEmpty(p))
        pop(p);
}

void push(Stack* p, int elem)
{
    Node* newNode = createNode(elem, p->top);
    if (newNode != NULL)
    {
        p->top = newNode;
        p->size++;
    }
}

void pop(Stack* p)
{
    if (isEmpty(p))
        return;

    Node* aux = p->top;
    p->top = p->top->next;
    free(aux);
    p->size--;
}

int topAndPop(Stack* p)
{
    if (isEmpty(p))
        return p->size;

    int topValue = top(p);
    pop(p);
    return topValue;
}

int size(Stack* p)
{
    return p->size;
}

void printStack(Stack* p)
{
    Node* aux = p->top;
    while (aux != NULL)
    {
        printf("%d\n", (int)aux->value);
        aux = aux->next;
    }
}