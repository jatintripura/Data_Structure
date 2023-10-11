#include<stdio.h>
#include<string.h>
int main()
{
    
    char name[50]="Jatin";
    char title[]=" Tripura";
    int i=0,length=0,j=0;
    while(name[i]!='\0')
    {
        i++;
        length++;
    }
    while(title[j]!='\0')
    {
        name[length+j]=title[j];
        j++;
    }
    puts(name);
}