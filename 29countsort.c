#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int findmax(int arr[],int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
       
    }
    return max;
}

void countsort(int arr[],int size)
{
    int max=findmax(arr,size);
    int i,j;
    
    int* count=(int*)malloc((max+1)*sizeof(int));

    for(int i=0;i<max+1;i++)
    {
        count[i]=0;
    }

//increse the coresponding index in the count array
    for(int i=0;i<size;i++)
    {
        count[arr[i]] = count[arr[i]] + 1;//arr no je value dharavto element hoy te index per 1 aave count array ma
    }

    j=0;//counter for main means arr aray
    i=0;//counter for count array

    while(i<=max)
    {
        if(count[i]>0)
        {
            arr[j]=i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
    }
}
int main()
{
    int arr[]={1,3,0,23,53,8,3,9};
    int size=sizeof(arr)/sizeof(int);
   
    display(arr,size);
    countsort(arr,size);
    display(arr,size);

    return 0;

}