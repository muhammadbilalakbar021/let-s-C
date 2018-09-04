#include<stdio.h>
typedef struct student
{
    char f_name[10];
    char l_name[10];
    int roll;
}stu;

int main()
{
    stu array[3];
    size_t i;
    stu *ptr;
    ptr=array;
    for(i=0;i<3;i++)
    {
        printf("For %d student",i+1);
        printf("Enter first name :");
        scanf("%s",&array[i].f_name);
        printf("Enter last name :");
        scanf("%s",&array[i].l_name);
        printf("Enter roll number :");
        scanf("%d",&array[i].roll);

    }
    for(i=0;i<3;i++)
    {
        printf("For %d student",i+1);
       printf("First name = %s\n",ptr->f_name);
       printf("last name = %s\n",ptr->l_name);
       printf("roll number = %d\n",ptr->roll);
       ptr++;

    }
}

