#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

void Display(struct node* ptr)
{
    struct node* first=(struct node*)malloc(sizeof(struct node));
    first=ptr;

    if(first==NULL)
    {
        cout<<"Your doubly linkedlist is empty "<<endl;
    }
    else{
    while(first!=NULL)
    {
        cout<<"Element : "<<first->data<<endl;
        first=first->next;
    }
    }
}
struct node* InsertAtFirst(struct node* ptr)
{
    struct node* first=(struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        cout<<"Enter element : ";
        cin>>first->data;
        first->prev=NULL;
        first->next=NULL;
        ptr=first;
    }
    else{
        cout<<"Enter element : ";
        cin>>first->data;
        ptr->prev=first;
        first->next=ptr;
        first->prev=NULL;
        ptr=first;
    }

    return ptr;
}

struct node* InsertAtEnd(struct node* ptr)
{
    struct node* first=(struct node*)malloc(sizeof(struct node));
    struct node* p=ptr;

    cout<<"Enter element : ";
    cin>>first->data;
    first->next=NULL;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=first;
    first->prev=p;
    

    return ptr;

}

struct node* InsertAfterIndex(struct node* ptr)
{
    struct node* first=(struct node*)malloc(sizeof(struct node));
    struct node* p=ptr;

    int i,k=0;
    cout<<"Enter index where you want to add element : ";
    cin>>i;
    cout<<"Enter element : ";
    cin>>first->data;

    while(i!=k)
    {
        p=p->next;
        k++;
    }
        first->next=p->next;
        p->next->prev=first;
        p->next=first;
        first->prev=p;

    return ptr;

}

struct node* DeleteAtFirst(struct node* ptr)
{
    struct node* p=ptr;
    ptr=ptr->next;
    ptr->prev=NULL;
    free(p);

    return ptr;
}

struct node* DeleteAtEnd(struct node* ptr)
{
    struct node* h=ptr;
    struct node* p=ptr->next;
    while(p->next!=NULL)
    {
        p=p->next;
        h=h->next;
    }
    h->next=NULL;

    return ptr;

}

struct node* DeleteAtIndex(struct node* ptr)
{
    int i;
    cout<<"Enter index number you want to delete : ";
    cin>>i;

    struct node* p=ptr;
    struct node* h=ptr->next;

    for(int j=0;j<i-1;j++)
    {
        p=p->next;
        h=h->next;
    }
    h->next->prev=p;
    p->next=h->next;
    free(h);

    return ptr;
}

int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    int i;

    do{
        cout<<"1.InsertAtFirst  2.InsertAtEnd  3.InsertAfterIndex  4.DeleteAtFirst  5.DeleteAtEnd  6.DeleteAtIndex  7.Display  8.Exit"<<endl;
        
        cout<<"Enter choice : ";
        cin>>i;

        switch(i)
        {
            case 1:head=InsertAtFirst(head);
                    break;
            case 2:head=InsertAtEnd(head);
                    break;
            case 3:head=InsertAfterIndex(head);
                    break;
            case 4:head=DeleteAtFirst(head);
                    break;
            case 5:head=DeleteAtEnd(head);
                    break;
            case 6:head=DeleteAtIndex(head);
                    break;
            case 7:Display(head);
                    break;
            
        }
    }while(i!=8);

    return 0;
}