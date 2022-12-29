#include <stdio.h>

// lb=lower bound

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int lb, int ub)
{
    int pivot, start, end;
    pivot = arr[lb];
    start = lb;
    end = ub;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }

        if (start < end)
        {
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    int temp;
    temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;

    return end;
}

void quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc;
        loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}
int main()
{
    int arr[] = {15, 5, 24, 8, 1, 10, 20};
    printArray(arr, 7);
    quicksort(arr, 0, 7);
    printArray(arr, 7);

    return 0;
}