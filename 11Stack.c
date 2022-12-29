#include <stdio.h>
#include <stdlib.h>

//stack in array

struct stack
{
    int size;//you want how much long stack.
    int top;//this is the top of the stack.
    int *arr;//this is dynemic array depend apon size you input.
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        
        return 1;//true
    }

    else
    {
        return 0;//false
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {

        return 1;//true
    }

    else
    {
        return 0;//false
    }
}

int main()
{
    struct stack *s;
    

    s->size = 6;
    s->top = -1; // means stack is empty

    s->arr = (int *)malloc(s->size * sizeof(int));

    

    // pushing element manually
    s->arr[0] = 1;
    s->top++;

    // check stack is empty or not

    if (isEmpty(s))
    {
        printf("stack is empty");
    }

    else
    {
        printf("stack is not empty");
    }

    return 0;
}