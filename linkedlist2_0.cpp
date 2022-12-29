#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void Display(struct node* ptr)
{
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p=ptr;

    if(p==NULL)
    {
        cout<<"Your linkedlist is empty "<<endl;
    }
    else{
        while(p!=NULL)
        {
        cout<<"Element : "<<p->data<<endl;
        p=p->next;
        }

    }

}
struct node* insertAtFirst(struct node* ptr)
{
    struct node* p=(struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        cout<<"Enter your data : ";
        cin>>p->data;
        p->next=NULL;
        ptr=p;
    }

    else{
        cout<<"Enter your data : ";
        cin>>p->data;
        p->next=ptr;
        ptr=p;
        
    }

    return ptr;

}

struct node* insertAtLast(struct node* head)
{
    struct node* p=(struct node*)malloc(sizeof(struct node));
    struct node* h=head;

        cout<<"Enter your data : ";
        cin>>p->data;
        p->next=NULL;
    
    while(h->next!=NULL)
    {
        h=h->next;
    }

    h->next=p;
    return head;
    
}

struct node* InsertAfter(struct node* ptr)
{
    int i;
    struct node* p=(struct node*)malloc(sizeof(struct node));
    struct node* h=ptr;
    cout<<"After which index you want to enter number : ";
    cin>>i;
    int k=0;

    while(k!=i)
    {
        h=h->next;
        k++;
    }

    cout<<"Enter element : ";
    cin>>p->data;
    p->next=h->next;
    h->next=p;

    return ptr;

}

struct node* InsertBefore(struct node* ptr)
{
    int i;
    struct node* p=(struct node*)malloc(sizeof(struct node));
    struct node* h=ptr;
    cout<<"Before which index you want to enter number : ";
    cin>>i;
    int k=0;

    while(k!=i-1)
    {
        h=h->next;
        k++;
    }

    cout<<"Enter element : ";
    cin>>p->data;
    p->next=h->next;
    h->next=p;

    return ptr;
}

struct node* DeleteAtFirst(struct node* ptr)
{
    struct node* h=ptr;
    ptr=ptr->next;

    free(h);
    return ptr;

}

struct node* DeleteAtLast(struct node* ptr)
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

struct node* DeleteAtBetween(struct node* head)
{
    int i;
    cout<<"Enter index number you want to delete : ";
    cin>>i;

   struct node *ptr = head->next;
    struct node *p = head;

    for (int j = 0; j < i- 1; j++)
    {
        p = p->next;
        ptr = ptr->next;
    }

    p->next = ptr->next;

    free(ptr);

    return head;

    
}
int main()
{
    struct node* head;
    head=(struct node*)malloc(sizeof(struct node));
    head=NULL;


      int n;

    do{
        cout<<"1.InsertAtFirst    2.InsertAtLast   3.Display  4.Exit  5.InsertBefore  6.InsertBefore  7.DeleteAtFirst  8.DeleteAtLast  9.DeleteAtBetween"<<endl;
      
        cout<<"Enter your choice : ";
        cin>>n;

        switch (n)
        {
        case 1: head=insertAtFirst(head);
            break;
        case 2: head=insertAtLast(head);
            break;
        case 3:Display(head);
            break;
        case 4:exit(0);
            break;
        case 5:head=InsertAfter(head);
            break;
        case 6:head=InsertBefore(head);
            break;
        case 7:head=DeleteAtFirst(head);
            break;
        case 8:head=DeleteAtLast(head);
            break;
        case 9:head=DeleteAtBetween(head);
            break;
        default:cout<<"your choice is wrong"<<endl;
            break;
        }
    }while(n!=10);



    return 0;


}



