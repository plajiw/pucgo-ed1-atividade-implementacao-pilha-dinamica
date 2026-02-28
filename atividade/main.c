#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Stack size: %d\n", size(&s));
    printStack(&s);

    pop(&s);

    printf("Stack size: %d\n", size(&s));
    printStack(&s);

    makeEmpty(&s);

    getchar();
    return 0;
}