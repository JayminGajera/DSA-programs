#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int ub, int lb, int mid)
{
    int i, j, k;
    i = lb, j = mid + 1, k = lb;
    int b[50];

    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }

    while (j <= ub)
    {
        b[k] = arr[j];
        k++;
        j++;
    }

    for (int i = lb; i <= ub; i++)
    {
        arr[i] = b[i];
    }
}

void mergesort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, ub, lb, mid);
    }
}

int main()
{
    int arr[] = {2, 35, 34, 0, 24, 75, 13};
    int size = sizeof(arr) / sizeof(int);
    int lb = 0;
    int ub = size - 1;

    display(arr, size);
    mergesort(arr, lb, ub);
    display(arr, size);

    return 0;
}