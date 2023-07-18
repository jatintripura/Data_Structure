#include<stdio.h>
int main()
{
      int row_col_1[3][3]={1,2,3,4,5,6,7,8,9};
       int row_col_2[3][3]={1,2,3,4,5,6,7,8,9};
       int sum=0;

      int i,j,k,new_row_col[3][3];
      for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                  new_row_col[i,j]=0;
                  for(j=0;j<=2;j++){
                        
                  new_row_col[i,j] = new_row_col[i,j] + row_col_1[i,k] * row_col_2[k,j];
                  printf("%d\n",new_row_col[i,j]);
                 
                  }
            }
      }
}
