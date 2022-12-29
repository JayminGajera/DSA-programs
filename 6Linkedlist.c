#include <stdio.h>
#include <stdlib.h>

// This program is for create Linkedlist.

struct Node //this is creat one node means two blocks { 1.data 2.pointer to next }.
{
    int data;//this is contain data
    struct Node *next;//this pointer use for point next block address
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    } 
}

int main()
{
    struct Node *head; //Linkedlist is starting form head
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;

    // Allocated memory for nodes in the linkedlist in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head->data = 7;
    head->next = Second;

    // Link second and third node
    Second->data = 11;
    Second->next = Third;

    // Link third and fourth node
    Third->data = 34;
    Third->next = Fourth;

    //terminat the node 
    Fourth->data =23;
    Fourth->next =NULL;

    //if i want to add forth element so we also add by creating fourth pointer

    linkedlisttraversal(head);

    return 0;
}