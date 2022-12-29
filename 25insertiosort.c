#include<stdio.h>

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)//this is for travers array
    {
        int temp,j;
        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp)//in array check element and sort
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=temp;

    }

}


int main()
{
    int arr[]={12,54,65,6,23,9};
    int size=sizeof(arr)/sizeof(int);

    printArray(arr,size);
    insertionSort(arr,size);
    printArray(arr,size);
    
    return 0;
}