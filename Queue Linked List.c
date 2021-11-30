#include "Queue Linked List.h"
#include <stddef.h>
void create(Llist *l)
{
    l->Front=NULL;
    l->rear=NULL;
}
int isEmpty(Llist l)
{
    return l.Front==NULL;
}
int isFull(Llist l){
    return 0;
}
void Enqueue(Llist *l,EntryType item)
{
    Node *p=(Node*)malloc(sizeof(Node));
    p->info=item;
    p->next=NULL;
    if(l->rear==NULL)
    {
        l->Front=p;
        l->rear=p;
    }
    else{
        l->rear->next=p;
        l->rear=l->rear->next;
      //l->rear=p;
    }
}
void Dequeue(Llist *l,EntryType *item)
{
    *item=l->Front->info;
    Node *tmp;
    tmp=l->Front;
    l->Front=l->Front->next;
    free(tmp);
}

