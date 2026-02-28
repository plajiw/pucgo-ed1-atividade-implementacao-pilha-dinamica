#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include "node.h"

typedef struct
{
    Node *top;
    int size;
} Stack;

void initStack(Stack *p);

void destroyStack(Stack *p);

bool isEmpty(Stack *p);

int top(Stack *p);

void makeEmpty(Stack *p);

void push(Stack *p, int elem);

void pop(Stack *p);

int topAndPop(Stack *p);

int size(Stack *p);

void printStack(Stack *p);

#endif