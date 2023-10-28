#include "stack.h"
#include <stdlib.h>

void push(struct Node **phead, int item) {
    struct Node *node = malloc( sizeof(struct Node) );
    *node = (struct Node) {
        .value = item,
        .pprev = NULL
    };

    glength++;
    if (!*phead) {
        *phead = node;
        return;
    }

    node->pprev = *phead;
    *phead = node;
}

int pop(struct Node **phead){
    if (!*phead) return -1;
    glength--;

    struct Node head = **phead;
    *phead = head.pprev;
    head.pprev = NULL;
    

    if (glength == 0) {
        *phead = NULL;
    }
    return head.value;
}

int peek(struct Node **phead) {
    return (*phead) ? (*phead)->value : -1;
}
