// https://www.pvv.ntnu.no/~hakonhal/main.cgi/c/classes/

#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

void enqueue(struct Node **phead, struct Node **ptail, int item) {
    struct Node *node = malloc( sizeof(struct Node) );
    *node = (struct Node) {
        .value = item,
        .pnext = NULL
    };

    glength++;
    if (!*ptail) {
        *ptail = *phead = node;
        return;
    }

    (*ptail)->pnext = node;
    *ptail = node;
}

int dequeue(struct Node **phead, struct Node **ptail) {
    if (!*phead) {
        return -1;
    }
    glength--;

    struct Node head = **phead;
    *phead = head.pnext;
    head.pnext = NULL;

    if (glength == 0) {
        *ptail = NULL;
    }

    return head.value;
}

int peek(struct Node **phead) {
    return (*phead) ? (*phead)->value : -1;
}
