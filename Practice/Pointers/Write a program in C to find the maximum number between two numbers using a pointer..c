#include<stdio.h>
int *func(int *n1 ,int *n2);
int main()
{
    int a,b;
    int *n1,*n2;
    //n1=&a;
    //n2=&b;
    int *result;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    result=func(&a,&b);
    printf("Your result is %d",*result);
}
int *func(int *n1 ,int *n2)
{
    if(*n1>*n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
