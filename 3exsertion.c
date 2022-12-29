#include <stdio.h>

//This program is for delet any element of array. is called exersion.

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indexexersion(int arr[], int size, int index)
{
    // for (int i = size-1; i >=index; i--)here we can not use this why so you want apply on paper dry run
    for(int i=index;i<=size-1;i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[50] = {2, 4, 1, 43, 34, 13, 90}, index = 0;
    int size = 7;
    display(arr, size);
    indexexersion(arr, size, index);

    size-=1;
    display(arr, size);

    return 0;
}