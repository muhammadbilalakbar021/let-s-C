#include<stdio.h>
typedef struct student
{
    char f_name[10];
    char l_name[10];
    int  roll;
}Student;
int std(Student *pntr);
int main()
{
    Student record;
    Student *pntr;
    pntr=&record;
    printf("Enter the student first name  :");
    scanf("%s",&record.f_name);
    printf("Enter the student last name :");
    scanf("%s",&record.l_name);
    printf("Enter the student roll number :");
    scanf("%d",&record.roll);
    std(pntr);


}
int std(Student *pntr)
{
    printf("Your student first name is %s \n",pntr->f_name);
    printf("Your student last name is %s \n",pntr->l_name);
    printf("Your student roll number is %d",pntr->roll);
}
