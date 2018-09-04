#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of A");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    c=a+b;
    if(c>50)
    printf("Sum is greater than 50");
    else
    printf("Sum is not greater than 50");
    return 0;
    }
