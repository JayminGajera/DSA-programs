#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            // swap(arr[i],arr[min])
            // {
            int empty;
            empty = arr[i];
            arr[i] = arr[min];
            arr[min] = empty;

            // }
        }
    }
}

int main()
{
    int arr[] = {7, 4, 10, 8, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}