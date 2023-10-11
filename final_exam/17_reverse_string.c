#include <stdio.h>
#include<string.h>
int main()
{
   char string[100], reverse[100];
   int i = 0, j=0, length;
   printf("Input a string:");
   gets(string);
   while (string[i] != '\0')
      i++;    


   length = i - 1;
   while(length>=0) {
      reverse[j] = string[length];
      j++;
      length--;
   }


   reverse[length] = '\0';


   printf("%s\n", reverse);


   return 0;
}