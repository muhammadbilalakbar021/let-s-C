#include<stdio.h>
int main()
{
    int a,b;
    float A;
    printf("Enter the values of a,b : ");
    scanf("%d%d",&a,&b);
    A=((a+b)*(a+b))/(2*a*b);
    printf("The value of A is %.2f",A);
    return 0;
    }
