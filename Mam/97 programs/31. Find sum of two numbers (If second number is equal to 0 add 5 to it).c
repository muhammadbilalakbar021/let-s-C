//31. Find sum of two numbers (If second number is equal to 0 add 5 to it)
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    if(b==0)
        {
            b=b+5;
        }

    c=a+b;
    printf("Sum of two numbers is %d",c);
    return 0;

}
