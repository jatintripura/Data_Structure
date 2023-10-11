#include<stdio.h>
#include<stdlib.h>
typedef struct students{
     
      char name[30];
       int id;
      float cgpa;
      char address[40];
}student;
void create(){
      struct student *s;
      int n,i;
      printf("How many student are you want ?");
      scanf("%d",&n);
      s=(student *)calloc(n,sizeof(student));
      for(i=0;i<n;i++)
      {
            printf("Enter student name :");
            scanf("%[^\n]s",s[i].name);
             fflush(stdin);
            printf("Enter student ID no :");
            scanf("%d",s[i].id);
             fflush(stdin);
            printf("Enter student CGPA :");
            scanf("%d",s[i].cgpa);
            printf("Enter  Address :");
            scanf("%[^\n]s",s[i].address);


      }


};
void display(){

};
void append(){

}

int main()
{
      int choice;
      do{
            printf("\n1. Create ");
            printf("\n2.Display ");
            printf("\n3.Append ");
            printf("\n0.Exit ");
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            switch(choice){
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

      return 0;
}