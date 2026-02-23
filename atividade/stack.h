#include <stdlib.h>
#include "node.h"
#ifndef STACK_H
#define STACK_H

typedef struct stack
{
    Node* top;
    int size;
} Stack;

#endif