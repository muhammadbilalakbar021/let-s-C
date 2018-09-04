#include<stdio.h>
int main()
{
    int a,b,rs;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    if(b > 0)
    {rs=a/b;
    printf("your result is %d",rs);
    }
    if(b<0)
    {rs=a*b;
    printf("your result is %d",rs);}
    if(b==0)
    {rs=a+b;
    printf("your result is %d",rs);}
    return 0;
    }
