#include <stdio.h>

// Time complexity of linear search is O(n).

// in linear search array is sorted or not both condition me work karega.

// this is linear search

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {

            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {21, 323, 123, 1, 32, 15};
    int size = sizeof(arr) / sizeof(int); // from this formula size is calculated
    int element = 123;
    int searchindex = linearsearch(arr, size, element);

    printf("The element %d was found at index %d \n", element, searchindex);

    return 0;
}