#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arry[MAX];
int top = -1;

void push(int data)
{
      if( top == MAX-1){
            printf("Stack overflow..!");
            return ;
      }
      top = top+1;
      stack_arry[top]=data;
}
void print()
{
      if( top == MAX - 1){
            printf("Stack overflow..!");
            return;
      }
      for(int i = top; i>-1; i--)
      {
            printf("%d\n",stack_arry[i]);
      }

}
int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);

print();
      return 0;
}
