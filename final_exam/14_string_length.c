#include<stdio.h>
#include<string.h>
int main()
{
    
    char string[50];
    gets(string);
  int i=0;
  while(string[i]!='\0')
  {
      i++;
  }
  printf("The string length is :%d",i);
}