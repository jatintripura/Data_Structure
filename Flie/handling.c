#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
      int i;
      char ch;
      FILE *fp;
      //write mode w
      // fp=fopen("flie.txt","w");
      //read mode r

      clrscr();
      fp=fopen("flie.txt","r");
      if(fp==NULL)
      {
            printf("flie can not access");
      }
      // for(i=0;i<strlen(ch);i++)
      // fputc(ch[i],fp);

      while(1){
      ch=fgetc(fp);
      if(fp==EOF)
      break;
      printf("",ch);
      }
      fclose(fp);
      getch();
}