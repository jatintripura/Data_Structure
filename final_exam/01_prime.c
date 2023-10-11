#include <stdio.h>
int main() {
    int n;
    printf("Enter the range:");
    scanf("%d",&n);
    int array[n];
    for(int i=2;i<=n;i++)
    {
        array[i]=-1;
        printf("%d\t",i);
    }
    for(int i=2;i<=n;i++)
    {
        if(array[i]==-1)
        {
            for(int j=2;j*i<=n;j++)
            {
                array[j*i]=0;
            }
        }
    }
       printf("\n\n");
       printf("The Prime Number is:\t");
     for(int i=2;i<=n;i++)
    {
       if(array[i]==-1)
       {
           printf("%d\t",i);
           
       }
    }
   
    return 0;
}