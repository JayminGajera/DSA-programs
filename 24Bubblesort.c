#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++) // for number of pass
    {

        for (int j = 0; j < size - 1 - i; j++) // for comparision in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortAdeptive(int arr[], int size)
{
    int temp;
    int isSorted = 0;

    for (int i = 0; i < size - 1; i++) // for number of pass
    {

        for (int j = 0; j < size - 1 - i; j++) // for comparision in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                isSorted = 1;
            }
        }
        if (isSorted == 0)
        {
            break; // array is alredy sorted
        }
    }
}

int main()
{
    int arr[] = {12, 42, 53, 7, 6, 4, 745, 23};
    // int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    bubbleSortAdeptive(arr, size);
    printArray(arr, size);

    return 0;
}