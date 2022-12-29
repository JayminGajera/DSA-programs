#include<stdio.h>
#include<stdlib.h>

//this practical is for binary tree

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node *insertnode(int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;

}

int main(){
     
   struct node* p=insertnode(2);
   struct node* p1=insertnode(1);
   struct node* p2=insertnode(4);

   p->left=p1;
   p->right=p2;


    return 0;
}