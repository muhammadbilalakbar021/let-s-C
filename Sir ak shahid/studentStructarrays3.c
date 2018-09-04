#include<stdio.h>
#include<string.h>

typedef struct student
{
  int rollno;
  char name[20];
  float marks[3];

}Student;
void printavg(float m[],int size)
{ int j,total;
    for(j=0,total =0;j<size;j++)
  {

    printf("Marks     : %.2f\n",m[j]);
    total += m[j];
  }
  printf("Total Marks = %d\n",total);
  printf("Average marks = %.2f\n",(float)total/j);

}
void printstudent(Student s)
{ int j,total=0;
  printf("Roll no : %d\n",s.rollno);
  printf("Name    : %s\n",s.name);
  printavg(s.marks,3);
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
  Student st1,st2,st[3] = {{2,"Ali",{50,60,70}},{1,"Babar",{50,60,70}},{3,"Qasim",{50,60,70}}};
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

  getstudent(&st2);
  printstudent(st2);

  for(i=0 ; i<3 ; i++)
  {
    printstudent(st[i]);
  }
return 0;
}
