struct Node {
    int value;
    struct Node *pprev;
};

extern unsigned long glength;
extern struct Node *phead;

void push(struct Node **phead, int item);
int pop(struct Node **phead);
int peek(struct Node **phead);
