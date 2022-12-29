#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traversallist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// case 1: delete the first element of linkedlist

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;

    free(ptr);

    return head;
}

// case 2: deleting an element at given index.

struct Node *deleteAtindex(struct Node *head, int index)
{
    struct Node *ptr = head->next;
    struct Node *p = head;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        ptr = ptr->next;
    }

    p->next = ptr->next;

    free(ptr);

    return head;
}

// case 3: delete the last element

struct Node *deletelast(struct Node *head)
{
    struct Node *ptr = head->next;
    struct Node *p = head;

    while (ptr->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    p->next = NULL;

    free(ptr);
    return head;
}

// case 4: delete node at which given value

struct Node *Atgivenvalue(struct Node *head, int value)
{
    struct Node *ptr = head->next;
    struct Node *p = head;

    while (ptr->data != value && ptr->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }

    if (ptr->data == value)
    {
        p->next = ptr->next;
        free(ptr);
    }

    return head;
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;

    printf("Linkedlist before deletion \n");
    traversallist(head);

    printf("Linkedlist after deletion \n");
    head=deleteFirst(head);
    traversallist(head);

    printf("Linkedlist after deletion at index \n");

    head=deleteAtindex(head,3);
    traversallist(head);

    printf("Linkedlist after deletion at last element\n");
     head=deletelast(head);
    traversallist(head);

    printf("Linkedlist after deletion at value of node\n");
    head = Atgivenvalue(head, 4);
    traversallist(head);

    return 0;
}