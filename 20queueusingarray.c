#include <stdio.h>
#include <stdlib.h>

//queue using an array

struct queue
{
    int size;
    int f; // this is show index number jaythi element remove karvana hoy k remove thya hoy
    int r; // this is also show index number of jya sudhi index bhareli hoy tya sudhi
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
    }
}

int dequeue(struct queue *q)
{
     int a=-1;
    if(isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else{
       
        q->f++;
        a=q->arr[q->f];
    }
        return a;
}

int main()
{
    struct queue q;
    q.size = 6;
    q.f = q.r = -1;

    q.arr = (int *)malloc(q.size * sizeof(int));


    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 15);
    enqueue(&q, 15);
    enqueue(&q, 15);
    enqueue(&q, 15);

    printf("dequeueing element %d \n",dequeue(&q));//here also we clear that first in first out 
    printf("dequeueing element %d \n",dequeue(&q));
    printf("dequeueing element %d \n",dequeue(&q));
    printf("dequeueing element %d \n",dequeue(&q));
    printf("dequeueing element %d \n",dequeue(&q));
    printf("dequeueing element %d \n",dequeue(&q));

    // enqueue(&q,45);

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }

    if(isFull(&q))
    {
        printf("Queue is full\n");
    }

    //in linear queue one problem is when we input 6 element and dequeue 6 element so isFull and isEmpty condition satisfy so ans is {queue is full and queue is empty} for sloving this problem we use circular queue

    return 0;
}