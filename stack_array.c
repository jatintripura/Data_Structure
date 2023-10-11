#include <stdio.h>
#define MAX 50
int top = -1;
int arr[MAX];
 
void push(int item){
 

    if(top == MAX-1){
        printf("Stack Overflow");
        return;
    }else{
     
        arr[++top]=item;
        printf("Push value is %d\n",item);
    }
}
 
void pop(){
 
    int val;
 
    if(top == -1){
        printf("Stack underflow");
        return;
    } else {
        val = arr[top];
        --top;
    }
 
    printf( "Pop value is %d\n",val);
}
 
int main()
{
    int arr[MAX];
 
    push(2);
    push(4);
    push(6);
 
    pop();
    pop();
    pop();
 
}