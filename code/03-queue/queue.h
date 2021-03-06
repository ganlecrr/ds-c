typedef struct node {
    int elem;
    struct node* next;
} Node;

typedef struct queue {
    Node* head;
    Node* tail;
} Queue;

Queue* init_queue(void);
void destroy_queue(Queue* q);

void enqueue(Queue* q, int elem);
int dequeue(Queue* q);
int is_empty(Queue* q);
