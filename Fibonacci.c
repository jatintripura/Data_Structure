#include<stdio.h>
int main()
{
      int frist=0,second=1,count=0,fibo,n;
      printf("Enter the range:");
      scanf("%d",&n);
      while(count<n){
            if(count<=1)
            {
                  fibo=count;
            }
            else{
                  fibo=frist+second;
                  frist=second;
                  second=fibo;

            }
            printf("%d\t",fibo);
            count ++;
      }
      printf("\n");
      return 0;
}