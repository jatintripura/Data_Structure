#include<stdio.h>
int fact(int n);
int main(){
      int n;
      printf("Enter the factorial number:");
      scanf("%d",&n);
      int ans = fact(n);
      printf("%d\n",ans);
      return 0;
}
int fact( int n){
      if(n==1){
      return 1;
      }
      int result = n * fact(n-1);
      return result;
      }
