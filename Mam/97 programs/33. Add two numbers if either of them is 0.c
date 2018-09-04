#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    if(a==0 || b==0)
    {
    c=a+b;
    printf("Result is %d",c);
    }
    return 0;
    }
