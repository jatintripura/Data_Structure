#include<stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node* left;
      struct node* right;
};
struct node* createNode(int data)
{
  struct node *n=(struct node*)malloc(sizeof(struct node));
  n->data=data;
  n->left=NULL;
  n->right=NULL;
  return n;
}
int main()
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p=createNode(5);
    p->left=NULL;
    p->right=NULL;
}