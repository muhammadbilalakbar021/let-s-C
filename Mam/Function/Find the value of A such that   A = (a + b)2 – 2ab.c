#include<stdio.h>
int value(int a, int b);
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("the value of your formula is = %d",value(a,b));
}
int value(int a, int b)
{
    return (a+b)*(a+b)-2*a*b;
}
