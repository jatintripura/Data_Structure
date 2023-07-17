#include<stdio.h>  
  
#define N 1000  
  
int main()  
{  
    int num[N], i, j;  
  
    for(i = 0; i < N; i++)  
        num[i] = i + 1;  
  
    for(i = 1; (num[i] * num[i]) <= N; i++)  
    {  
        if(num[i] != 0)  
        {  
            for(j = num[i] * num[i]; j <= N; j += num[i])  
            {  
                num[j - 1] = 0;  
            }  
        }  
  
    }  
  
    printf("Sieve of Eratosthenes Method\n");  
    printf("To find Prime numbers from 2 to %d\n\n", N);  
    for(i = 1; i < N; i++)  
    {  
        if(num[i] != 0)  
            printf("%d\t", num[i]);  
    }  
  
    printf("\n");  
  
    return 0;  
}