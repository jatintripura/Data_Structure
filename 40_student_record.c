#include<stdio.h>
 typedef struct students{
      int id;
      char name[50];
      float cgpa;
      char address[50];
}student;
void create();
void display();
void append();
int main()
{
int choice;
do{
   printf("\n\t\t\t\t\t 1.CREATE\t\t\t\t\t\n");
   printf("\n\t\t\t\t\t 2.DISPLAY\t\t\t\t\t\n");
   printf("\n\t\t\t\t\t 3.APPEND\t\t\t\t\t\n");
   printf("\n\t\t\t\t\t 0.EXIT\t\t\t\t\t\n");
   printf("\n\t\t\t\t\t Enter your choice :\t\t\t\t\t\n");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
            create();
      break;
      case 2:
             display();
      break;
      case 3:
            append();
            break;       
   }

}while(choice!=0);
}