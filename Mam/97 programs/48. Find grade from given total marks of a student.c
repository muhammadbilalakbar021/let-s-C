#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks percentage : \n");
    scanf("%d",&marks);

    if(marks>90)
    printf("A+");
    if(marks>80)
    printf("A");
    if(marks>70)
    printf("B");
    if(marks>60)
    printf("C");
    if(marks>50)
    printf("D");
    if(marks<50)
    printf("F");

    return 0;
    }
