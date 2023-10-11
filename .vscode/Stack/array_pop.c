#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arry[MAX];
int top=-1;

void push(int data)
{
      if( top == MAX-1){
            printf("Stack overflow..!");
            return ;
      }
      top = top+1;
      stack_arry[top]=data;
}
int pop()
{
      int value;
      if(top == -1)
      {
            printf("Stack underflow..!");
            exit(1);
      }
      value=stack_arry[top];
      top=top-1;
      return value;
}
void print()
{
      if( top == MAX - 1){
            printf("Stack overflow..!");
            return;
      }
      for(int i=top; i>-1; i--)
      {
            printf("%d",stack_arry[i]);
            printf("\n");
      }

}
int main()
{
      int data;

push(20);
push(30);
push(40);
push(50);
data=pop();
print();
      return 0;
}
