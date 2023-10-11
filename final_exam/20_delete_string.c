#include<stdio.h>
#include<string.h>
void main()
{
   char str[20];
   int i, n, length, pos;
   printf("Enter the string:");
   gets(str);
   printf("Enter the position :");
   scanf("%d", &pos);
   printf("Enter the length:");
   scanf("%d", &n);
   length = strlen(str);
   for(i = pos + n; i < length; i++)
   {
      str[i - n] = str[i];
   }
   str[i - n] = '\0';
   printf("The string is: %s", str);
}