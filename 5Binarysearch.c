#include <stdio.h>

// binear search me array sorted hona chahiye

// Time complexity of binarysearch is O(logn).

int binarysearch(int arr[], int size, int element)
{
    int start, mid, end;//here start,end and mid is index number

    start = 0;
    end = size - 1;

    while (start <= end)
    {
        mid = start + (end-start)/2;
        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int arr[] = {1, 23, 44, 55, 123, 233, 434, 455}; // in this we use only sorted array
    int size = sizeof(arr) / sizeof(int);//size=8
    int element = 455;
    int searchindex = binarysearch(arr, size, element);

    printf("The element %d was found at index %d \n", element, searchindex);

    return 0;
}