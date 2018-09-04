#include<stdio.h>
int grades(int);

int main()
{
    int marks,gd;
    printf("Enter your marks");
    scanf("%d",&marks);
    gd=grades(marks);
    if(gd==1)
        printf("Grade is A+",marks);
    if(gd==2)
        printf("Grade is A",marks);
    if(gd==3)
        printf("Grade is B",marks);
    if(gd==4)
        printf("Grade is C",marks);
    if(gd==5)
        printf("Grade is D",marks);
    else
        printf("fAIL");

}
int grades(int marks)
{
    if(marks>=90)
        return 1;
    if(marks>=85 && marks<=89)
        return 2;
    if(marks>=75 && marks<=84)
        return 3;
    if(marks>=65 && marks<=74)
        return 4;
    if(marks>=50 && marks <=65)
        return 5;
    else
        return 0;
}
