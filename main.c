#include "node.c"
#include "stack.c"

int main()
{
    Stack *stack = (Stack*)malloc(sizeof(Stack));

    initStack(stack);

    printStack(stack);

    free(stack);
    return 0;    
}