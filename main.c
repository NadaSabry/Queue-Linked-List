#include <stdio.h>
#include <stdlib.h>
#include "Queue Linked List.h"
int main()
{
    EntryType x;
    Llist l;
    create(&l);
    Enqueue(&l,'A');
    Enqueue(&l,'h');
    Enqueue(&l,'m');
    Enqueue(&l,'e');
    Enqueue(&l,'d');
    Enqueue(&l,' ');
    Enqueue(&l,':');
    Enqueue(&l,')');
    Enqueue(&l,' ');
    Enqueue(&l,':');
    Enqueue(&l,'(');
    while(!(isEmpty(l)))
    {
        Dequeue(&l,&x);
        printf("%c",x);
    }
    printf("\nis full ? %d",isFull(l));

    return 0;
}
