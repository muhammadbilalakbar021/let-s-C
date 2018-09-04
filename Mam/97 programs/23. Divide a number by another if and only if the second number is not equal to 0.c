#include<stdio.h>
int main()
{
    int a,b,sol;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    if(b>0)
    {
        sol=a/b;
        printf("answer is %d",sol);
    }
    else
    printf("Soory");
    return 0;
    }
