#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *pre;
    int data;
    struct node *link;
};
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->pre=NULL;
    head->data=10;
    head->link=NULL;
    struct node *ptr=NULL;
    ptr=head;
    while(ptr !=NULL)
    {
      printf("%d\n",ptr->data);
      ptr=ptr->link;
    }
    
}