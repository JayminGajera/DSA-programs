#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f, r;
    int *arr;
};

int isFull(struct circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct circularqueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct circularqueue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
        printf("Enqueued element %d\n", value);
    }
}

int dequeue(struct circularqueue *q)
{
    int a;
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {

        q->f = (q->f + 1) % q->size;
        return q->arr[q->f];
    }
}

int main()
{
    struct circularqueue q;
    q.size = 4; //here size =4 but we insert only 3 elements because 1 index is reserve for 0
    q.f = q.r = 0; // in circular queue -1 index is not there

    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 125);
   


    // Dequeue elements
    // printf("dequeueing element %d \n", dequeue(&q));
    // printf("dequeueing element %d \n", dequeue(&q));
    // printf("dequeueing element %d \n", dequeue(&q));
    

    //  enqueue(&q, 45);
    

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }

    if (isFull(&q))
    {
        printf("Queue is full\n");
    }

    return 0;
}