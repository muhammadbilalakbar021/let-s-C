#include<stdio.h>
typedef struct student
{
    char name[20];
    int roll_no;
    float percentage;
}student;

int main()
{
    student no;
    printf("Enter name of student :");
    gets(no.name);
    //printf("%s",&no.name);
    printf("Enter roll number :");
    scanf("%d",&no.roll_no);
    printf("Enter his percentage :");
    scanf("%d",&no.percentage);
    puts("---------------");
    puts("---------------");
    puts("---------------");
    printf("The name you entered is %s\n",no.name);
    printf("The roll number you entered is %d\n",no.roll_no);
    printf("The percentage you entered is %f\n",no.percentage);



}
