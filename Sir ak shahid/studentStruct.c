#include<stdio.h>
#include<string.h>

typedef struct student
{
  int rollno;
  char name[20];
  float fee;
}Student;

int main()
{

  Student st1,st2,st[3] = {{2,"Ali",15000.00},{1,"Babar",35000.00},{3,"Qasim",25000.00}};
  Student *ptr;
  int i;
  st1.rollno = 4;
  strcpy(st1.name,"Qasim");
  st1.fee = 40000.00;
  st2 = st1;
  ptr = &st1;
  printf("Size of st1 = %d\n\n\n",sizeof(struct student));
  printf("Roll no : %d\n",st1.rollno);
  printf("Name    : %s\n",st1.name);
  printf("Fee     : %.2f\n\n",st1.fee);


  printf("Roll no : %d\n",ptr->rollno);
  printf("Name    : %s\n",ptr->name);
  printf("Fee     : %.2f\n\n",(*ptr).fee);

  printf("Enter Roll number : ");
  scanf("%d",&st2.rollno);
  fflush(stdin);
  printf("Enter Name : ");
  gets(st2.name);
  printf("Enter Fee : ");
  scanf("%f",&st2.fee);
  printf("Roll no : %d\n",st2.rollno);
  printf("Name    : %s\n",st2.name);
  printf("Fee     : %.2f\n\n",st2.fee);

  for(i=0 ; i<3 ; i++)
  {
    printf("Roll no : %d\n",st[i].rollno);
    printf("Name    : %s\n",st[i].name);
    printf("Fee     : %.2f\n\n",st[i].fee);

  }
return 0;
}
