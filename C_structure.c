#include<stdio.h>
struct students{
      char name[100];
      int id;
      
}s1,s2,s3;//Global variable declare
int main()
{
    //   struct students s1,s2,s3;    Local variable declare
     gets(s1.name);
     gets(s2.name);
     gets(s3.name);
     scanf("%d",&s1.id);   //Access element with dot operator.
     scanf("%d",&s2.id);
     scanf("%d",&s3.id);
     printf(" Students Name:%s\n",s1.name);
     printf(" Students Id:%d\n\n",s1.id);
     printf(" Students Name:%s\n",s2.name);
      printf(" Students Id:%d\n\n",s1.id);
    printf(" Students Name:%s\n",s3.name);
     printf(" Students Id:%d\n",s1.id);
}
