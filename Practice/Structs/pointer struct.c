#include<stdio.h>
typedef struct student
{
    char fname[20];
    char lname[20];
    int roll;
}stud;
int main()
{
    stud array[2];
    stud *ptr;
    ptr=array;
    int i;

    for(i=0;i<2;i++)
    {
        printf("Enter first name : ");
        scanf("%s",&array[i].fname);
        printf("Enter last name : ");
        scanf("%s",&array[i].lname);
        printf("Enter roll number : ");
        scanf("%d",&array[i].roll);
        puts("======================");
    }
    for(i=0;i<2;i++)
    {
        printf("The record for %d student is :\n\n",i+1);
        printf("Your first name is %s\n",ptr->fname);
        printf("Your last name is %s\n",ptr->lname);
        printf("Your roll number is %d\n",ptr->roll);
        ptr++;
        puts("======================");
    }

}
