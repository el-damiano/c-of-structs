struct Node {
    int value;
    struct Node *pnext;
};

extern unsigned long glength;
extern struct Node *phead;
extern struct Node *ptail;

void enqueue(struct Node **ptail, struct Node **phead, int item);
int dequeue(struct Node **phead, struct Node **ptail);
int peek(struct Node **phead);
