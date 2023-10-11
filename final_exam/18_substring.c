#include <stdio.h>
 
int main()
{
   char string[100], sub[100];
   int position, length, i = 0;
 
   printf("Input a string:");
   gets(string);
 
   printf("Enter the position and length of substring:");
   scanf("%d%d", &position, &length);
 
   while (i < length) {
      sub[i] = string[position+i-1];
      i++;
   }
   sub[i] = '\0';
 
   printf("The substring is:%s", sub); 
 
   return 0;
}