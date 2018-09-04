#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    printf("Enter third number : \n");
    scanf("%d",&c);
    d=a+b;
    if(d>c)
    printf("%d + %d is greater than %d",a,b,c);
    else
    printf("%d + %d is not greater than %d",a,b,c);
    return 0;
    }
