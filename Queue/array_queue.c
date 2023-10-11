#include<stdio.h>
#include<stdbool.h>
#define SIZE 5
int queue[SIZE];
int front=0,rear=-1,totalelement=0;
bool isFull()
{
      if(totalelement==SIZE)
      {
            return true;
      }
      return false;
};
bool isEmpty()
{
      if(front==0)
      {
          return true;
      }
      return false;
};
void enqueue(int item)
{
  if(isFull())
  {
      printf("Queue overflow\n");
      return;
  }
  rear=(rear+1)%SIZE;
  queue[rear]=item;
  totalelement ++;
};
int dequeue(){
    if(isEmpty())
    {
         printf("Queue underflow\n");
         return -1;
    }
    int frontitem=queue[front];
    front=(front+1)%SIZE;
    totalelement--;
    return frontitem;
    
}
void print()
{
      for(int i=0;i<SIZE;i++)
      {
            printf("%d\t",queue[i]);
      }
};
int main()
{
      printf("---Queue implement---\n");
      enqueue(10);
      enqueue(20);
      enqueue(30);
      enqueue(40);
      enqueue(50);
      dequeue();
      enqueue(60);
      
      print();
}