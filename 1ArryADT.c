#include <stdio.h>
#include <stdlib.h> //this is for malloc

//IMPLIMENT AN ARRAY AS ABSTRACT DATA TYPE(ADT).

struct myArray//myArray is abstrct data type
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize) //this function is creat dynemic array and also array's capicity and how many element you store.
{
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr=(int*)malloc(tsize*sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void setval(struct myArray *a)
{
    int n;

    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void showdata(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;

    createArray(&marks, 10, 2);
    printf("Set the value of array \n");
    setval(&marks);

    printf("Show the value of array \n");
    showdata(&marks);

    

    return 0;
}