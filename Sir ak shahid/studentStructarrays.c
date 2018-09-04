  #include<stdio.h>
#include<string.h>

typedef struct student
{
  int rollno;
  char name[20];
  float marks[3];
}Student;

void printstudent(Student s)
{ int j,total=0;
  printf("Roll no : %d\n",s.rollno);
  printf("Name    : %s\n",s.name);
  for(j=0,total =0;j<3;j++)
  {

    printf("Marks     : %.2f\n",s.marks[j]);
    total += s.marks[j];
  }
  printf("Total Marks = %d",total);
  printf("Average marks = %.2f",(float)total/j);

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


  printf("Roll no : %d\n",ptr->rollno);
  printf("Name    : %s\n",ptr->name);

  for(j=0,total=0;j<3;j++)
  {
   printf("Marks     : %.2f\n",ptr->marks[j]);
   total += ptr->marks[j];
  }
  printf("Total Marks = %d",total);
  printf("Average marks = %.2f",(float)total/j);

  printf("Enter Roll number : ");
  scanf("%d",&st2.rollno);
  fflush(stdin);
  printf("Enter Name : ");
  gets(st2.name);

  for(j=0;j<3;j++)
  { printf("Marks     : ");
    scanf("%f",&st2.marks[j]);
  }

  printf("Roll no : %d\n",st2.rollno);
  printf("Name    : %s\n",st2.name);
  for(j=0,total=0;j<3;j++)
  {
    printf("Marks     : %.2f\n",st2.marks[j]);
    total += st2.marks[j];
  }
  printf("Total Marks = %d",total);
  printf("Average marks = %.2f",(float)total/j);

  for(i=0 ; i<3 ; i++)
  {
    printf("Roll no : %d\n",st[i].rollno);
    printf("Name    : %s\n",st[i].name);

    for(j=0,total=0 ; j<3 ; j++)
     {
        printf("Marks     : %.2f\n",st[i].marks[j]);
        total += st[i].marks[j];
     }
    printf("Total Marks = %d",total);
    printf("Average marks = %.2f",(float)total/j);
  }
return 0;
}
