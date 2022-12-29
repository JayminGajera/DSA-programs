
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;

};

struct node* createnode(int data)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->right=NULL;
    n->left=NULL;
}

void inorder(struct node* root)
{

    if(root!=NULL)
    {
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }


}

int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct node* search(struct node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    else if(root->data<key)
    {
        return search(root->right,key);
    }
    else{
        return search(root->left,key);
    }
}

int main()
{
    struct node* p=createnode(5);
    struct node* p1=createnode(3);
    struct node* p2=createnode(6);
    struct node* p3=createnode(1);
    struct node* p4=createnode(4);

    //     5
    //    / \
//       3   6
//      / \
//     1   4

    p->right=p2;
    p->left=p1;
    p1->left=p3;
    p1->right=p4;

    inorder(p);
    printf("\n");
    if(isBST(p)){
        printf("This is a bst" );
    }
    else{
        printf("This is not a bst");
    }
    printf("\n");

    struct node* n=search(p,10);

    if(n!=NULL)
    {
         printf("found : %d",n->data);
    }
    else{
        printf("Element not found \n");
    }
   
    

    return 0;
}