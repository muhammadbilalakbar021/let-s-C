#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    c=a-b;
    if(c<10)
    {
        c=a*b;
        printf("multiply %d",c);
    }
    if(c>10)
    {
    c=a/b;
    printf("divide %d",c);
    }
    else
    printf("None");

    return 0;
    }
