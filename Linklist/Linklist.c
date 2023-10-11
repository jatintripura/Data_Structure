#include<stdio.h>
#include<stdlib.h>

struct node{
      int data;
      struct node *next;
};
// Insert a node in begin funtion

struct node *add_begin(struct node *head,int data){
      struct node *ptr=(struct node *)malloc(sizeof(struct node));
      ptr->data=data;
      ptr->next=head;
      return ptr;
};
// Add node in index function
struct node *add_index(struct node *head,int data,int index){
      struct node *ptr=(struct node *)malloc(sizeof(struct node));
      struct node *p=head;
      int i=0;
      while(i!=index-1)
      {
            p=p->next;
            i++;
      }
      ptr->data=data;
      ptr->next=p->next;
      p->next=ptr;
      return head;
};

// Insert add end function
struct node *add_end(struct node *head,int data){
      struct node *ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=data;
      struct node *p=head;
      while(p->next!=NULL)
      {
            p=p->next;
      }
      p->next=ptr;
      ptr->next=NULL;
      return head;
};
// first node delete function
struct node *delete_at_begin(struct node *head){
      struct node*ptr=head;
      head=head->next;
      free(ptr);
      return head;
};

// delete index at node 
struct node *delete_at_index(struct node *head , int index){
      struct node*p=head;
      struct node*q=head->next;
     for(int i=0;i<index-1;i++)
     {
      p=p->next;
      q=q->next;
     }
     p->next=q->next;
     free(q);
      return head;
};

struct node *delete_at_end(struct node *head ){
      struct node*p=head;
      struct node*q=head->next;
     while(q->next !=NULL)
     {
      p=p->next;
      q=q->next;
     }
     p->next=NULL;
     free(q);
      return head;
};

// Traverse function
void print(struct node *ptr)
{
      while(ptr != NULL)
      {
            printf(" Element: %d\n",ptr->data);
            ptr=ptr->next;
      }
};
int main()
{
//create a node 

struct node *head=(struct node *)malloc(sizeof(struct node));
struct node *first=(struct node *)malloc(sizeof(struct node));
struct node *second=(struct node *)malloc(sizeof(struct node));
head->data=30;
head->next=first;
first->data=40;
first->next=NULL;

printf("Traverse the node:\n");
print(head);
printf("\n");
//Begin add function calling
head=add_begin(head,20);
printf("After add in begin the node:\n");
print(head);
printf("\n");
// Index add function callng
head=add_index(head,35,2);
printf("After add in the node at 2 no index:\n");
print(head);
printf("\n");
// Add end function call
head=add_end(head,60);
printf("After add at end:\n");
print(head);
printf("\n");
// delete function calling 
head=delete_at_begin(head);
printf("After delete at first node:\n");
print(head);
printf("\n");

//delete index at node functiion calling 
head=delete_at_index(head,3);
printf("After delete the 3 no index:\n");
print(head);
printf("\n");
// delete at end node functiion calling 
head=delete_at_end(head);
printf("After the delete at last node :\n");
print(head);
printf("\n");

return 0;
}