typedef struct queueInternals *Queue;
void enqueue(Queue q, int item);
int dequeue(Queue q);
Queue newQueue(void);
