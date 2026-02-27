#include "stack.h"
#include <stdlib.h>
#define ERRO -999;

void initStack(Stack *p)
{
    p->top = NULL;
    p->size = 0;
}

void destroyStack(Stack *p)
{
    makeEmpty(p);
}

bool isEmpty(Stack *p)
{
    return p->top == NULL ? true : false;
}

int top(Stack *p)
{
    if (!isEmpty(p))
        return p->top->value;
    else
        return ERRO;
}

void makeEmpty(Stack *p)
{
    while (!isEmpty(p))
        pop(p);
}

//  Alternatica ao push
// void push(Stack *p, int elem)
// {
//     p->top = createNode(elem, p->top);
//     p->size++;
// }

void push(Stack *p, int elem)
{
    Node *newNode;
    p->top = createNode(elem, NULL);
    newNode->next = p->top;
    p->size++;
}

void pop(Stack *p)
{
    if (isEmpty(p))
    {
        printf("Empty stack\n");
        return;
    }

    Node *aux = p->top;
    p->top = p->top->next;
    free(aux);
    p->size--;
}

int topAndPop(Stack *p)
{
    if (isEmpty(p))
    {
        printf("Empty stack\n");
        return p->size;
    }

    int topValue = top(p);
    pop(p);
    return topValue;
}

int size(Stack *p)
{
    return p->size;
}

void printStack(Stack *p)
{
    Node *aux = p->top;
    while (aux != NULL)
    {
        printf("%d\n", aux->value);
        aux = aux->next;
    }
}