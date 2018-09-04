#include<stdio.h>
#include<string.h>

typedef struct student
{
  int rollno;
  char name[20];
  float marks[3];

}Student;
void printavg(float m)
{ int j,total;
    for(j=0,total =0;j<3;j++)
  {

    printf("Marks     : %.2f\n",m[j]);
    total += s.m[j];
  }
  printf("Total Marks = %d\n",total);
  printf("Average marks = %.2f\n",(float)total/j);

}
void printstudent(Student s)
{ int j,total=0;
  printf("Roll no : %d\n",s.rollno);
  printf("Name    : %s\n",s.name);

}
void getstudent(Student *sptr)
{ int j;
  printf("Enter Roll number : ");
  scanf("%d",&sptr->rollno);
  fflush(stdin);
  printf("Enter Name : ");
  gets(sptr->name);

  for(j=0;j<3;j++)
  { printf("Marks     : ");
    scanf("%f",&sptr->marks[j]);
  }

}
int main()
{
typedef struct student Student;
  Student st1;
  Student *ptr;
  int i,j,total=0;
  st1.rollno = 4;
  strcpy(st1.name,"Qasim");
  st1.marks[0] = 78;
  st1.marks[1] = 48;
  st1.marks[2] = 88;
  total = st1.marks[0] +st1.marks[1] +st1.marks[2];
  st2 = st1;
  ptr = &st1;
  printf("Size of st1 = %d\n\n\n",sizeof(struct student));

  printstudent(st1);
  printstudent(*ptr);



  for(i=0 ; i<3 ; i++)
  {
    printstudent(st[i]);
  }
return 0;
}
