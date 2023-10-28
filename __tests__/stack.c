#include "../stack.h"
#include <stdio.h>

unsigned long glength = 0;

struct Node *phead = NULL;
struct Node *ptail = NULL;

int main() {
    // Caveman tests (to refactor one day)
    int counter = 0;

    // Test for empty
    if (peek(&phead) == -1) counter++;

    // Enqueue and test if head is correct
    push(&phead, 10);
    push(&phead, 0);
    push(&phead, 6);
    if (peek(&phead) == 6) counter++;

    // Dequeque and test if head is correct
    pop(&phead);
    if (peek(&phead) == 0) counter++;

    pop(&phead);
    if (peek(&phead) == 10) counter++;

    // Dequeque last item and test if empty
    pop(&phead);
    if (peek(&phead) == -1) counter++;

    printf("%d out of %d tests have finished successfully\n", counter, 5);
}
