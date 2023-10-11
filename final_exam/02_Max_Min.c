
#include <stdio.h>
int main() {
   int n;
   printf("Enter the size of array:\t");
   scanf("%d",&n);
   int array[n];
   printf("Enter the array element :\t");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }
   int max=array[0],min=array[0],i;
     for( i=0;i<n;i++)
   {
     if(max<array[i])
     {
        max=array[i];
     }
     if(min>array[i])
     {
        min=array[i];
     }
     
   }
   printf(" The Max number is :%d\n The Min number is :%d\n",max,min);
    return 0;
}