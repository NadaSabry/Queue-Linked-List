typedef char EntryType;
typedef struct node{
    EntryType info;
    struct node *next;
}Node;
typedef struct{
    Node *Front;
    Node *rear;
}Llist;

void create(Llist *l);
void Enqueue(Llist *l,EntryType item);
void Dequeue(Llist *l,EntryType *item);
int isEmpty(Llist l);
int isFull(Llist l);
