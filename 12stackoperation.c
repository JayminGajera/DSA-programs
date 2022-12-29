#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *ptr) //time complexity is O(1)
{
    if (ptr->top == -1)
    {

        return 1;
    }

    else
    {
        return 0;
    }
}

 int isFull(struct stack *ptr) //time complexity is O(1)
{
    if (ptr->top == ptr->size - 1)
    {

        return 1;
    }

    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int value) //time complexity is O(1)
{
    if (isFull(ptr))
    {
        printf("stack is overflow\n");
    }

    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack *ptr)//time complexity is O(1)
{
    if (isEmpty(ptr))
    {
        printf("stack is underflow(empty)\n");
    }

    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int main()
{
    struct stack *s;
    s->size = 10;
    s = (struct stack *)malloc(s->size * sizeof(struct stack));//this is stack

   
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));//this is size of stack inform of array

    printf("stack is created successfully\n");

    printf("Before pushing,Full : %d\n", isFull(s));
    printf("Before pushing,Empty : %d\n", isEmpty(s));

    push(s, 19);
    push(s, 12);
    push(s, 12);
    push(s, 12);
    push(s, 12);
    push(s, 12);
    push(s, 12);
    push(s, 12);
    push(s, 12);
    push(s, 5);

    printf("After pushing,Full : %d\n", isFull(s));
    printf("After pushing,Empty : %d\n", isEmpty(s));

    printf("%d is pop out", pop(s));

    printf("After poping,Full : %d\n", isFull(s));
    printf("After poping,Empty : %d\n", isEmpty(s));

    return 0;
}