#include<stdio.h>
# define CAPACITY 4
int stack[CAPACITY];
int top=-1;
void push( int x){
if(top<CAPACITY-1){
      top=top+1;
      stack[top]=x;
      printf("Stack push elment:%d\n",x);
}
else{
      printf("Stack overflow\n");
}
};
int pop(){
if(top>=0)
{
      int value=stack[top];
      top=top-1;
      return value;
}
else{
      printf("Stack underflow\n");
}
};
int peek()
{
 if(top>=0){
      return stack[top];
 }
 else{
      printf("Stack is empty \n");
 }
};
int main()
{
      printf("---Stack Implement---\n");
      peek();
      push(10);
      push(20);
      push(30);
      push(40);
      printf("The top element is:%d\n",peek());
      printf("The pop element is:%d\n",pop());
      push(50);
      pop();
       pop();
        pop();
         pop();
          pop();
}