#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    c=a-b;
    if(c>0)
    {d=a*b;
    printf("Your product is %d",d);}
    else
    printf("Soory");
    return 0;
    }
