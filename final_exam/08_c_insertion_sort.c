#include <stdio.h>

int main() {
   int array[]={2,1,4,6,5,7,8,9,3};
   int length=sizeof(array)/sizeof(array[0]);
   int hole,i,j;
   for(i=1;i<length;i++)
   {
       hole=array[i];
       j=i-1;
      while(j>=0 && array[j] > hole){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = hole;
   }
   
   for(i=0;i<length;i++)
   {
       printf("%d\t",array[i]);
   }

    return 0;
}