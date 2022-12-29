#include <stdio.h>
#include <stdlib.h>

//This programe is for Linkedlist operation

struct Node
{
    int data;
    struct Node *next;
};

void linklisttraversal(struct Node *node)
{
    while (node != NULL)
    {
        printf("Element : %d \n", node->data);
        node = node->next;
    }
}


//case 1
struct Node *inserAtfirst(struct Node *head, int data) // this is for insert element at first
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node ));//here we creat a new block which we input at first.

    ptr->next = head;
    ptr->data = data;

    return ptr;
}


//case 2
struct Node* insertAtEnd(struct Node*head,int data)
{
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node ));//here creat a new block for joint at end.
    ptr->data=data;

    struct Node *p=head;//creat a pointer for travers linkedlist starting from head.

    while(p->next!=NULL)
    {
        p=p->next;

    }

    p->next=ptr;//link ptr at end
    ptr->next=NULL;

    return head;
}


//case 3
struct Node *insertAtbetween(struct Node *head, int data, int index)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node *));// creat a new block
    ptr->data = data;

    struct Node *p = head; // this is for loop starting from head.

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
   
    ptr->next = p->next;
    p->next = ptr;

    return head;
}


//case 4
struct Node* insertAfterNode(struct Node* head,struct Node * prevNode,int data)
{
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node*));//creat a new block
    
    ptr->data=data;

    ptr->next=prevNode->next;
    prevNode->next=ptr;


    return head;
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Alloceted memory in heap to linkedlist
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

    linklisttraversal(head);

    printf("After add element at first\n");

    head = inserAtfirst(head, 34);

    linklisttraversal(head);

     printf("After add element at between\n");

    head = insertAtbetween(head, 45, 1);

    linklisttraversal(head);

     printf("After add element at End\n");

    head=insertAtEnd(head,46);

    linklisttraversal(head);

    printf("After add element at index \n");

    head=insertAfterNode(head,third,99);

    linklisttraversal(head);

    return 0;
}