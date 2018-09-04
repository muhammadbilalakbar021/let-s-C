#include<stdio.h>
int main()
{
    int a,b,c;
    float A;
    printf("Enter the values of a,b,c : ");
    scanf("%d%d%d",&a,&b,&c);
    A=((a-b)*(a-b))/(2*c);
    printf("The value of A is %.2f",A);
    return 0;
    }
