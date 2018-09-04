#include<stdio.h>
typedef struct student
{
	char f_name[10];
	char l_name[10];
	int roll_number[10];
}Student;
int  main()
{
	Student array[10];
	size_t i;
	for(i=0;i<3;i++)
	{
		printf("Enter details for %d Student\n",i+1);
		printf("Enter first name : ");
		scanf("%s",&array[i].f_name);
		printf("Enter last name : ");
		scanf("%s",&array[i].l_name);
		printf("Enter Your Roll number : ");
		scanf("%d",&array[i].roll_number);
		puts("---------------");
	}

	for(i=0;i<3;i++)
	{
		printf("details for %d Student\n",i+1);
		printf("first name :%s ",array[i].f_name);
		printf("last name :%s ",array[i].l_name);
		printf("Roll number :%d ",array[i].roll_number);
	}
}
