#include<stdio.h>
int avg(int, int, int);
int main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    avg(a,b,c);
    if(avg(a,b,c)==1)
        printf("Your number is negative");
    if(avg(a,b,c)==2)
        printf("Your number is 0");
    else
        printf("Your number is not negative");
}
int avg(int a, int b, int c)
{
    c=(a+b)/2;
    if (c<0)
        return 1;
    if (c==0)
        return 2;
    else
        return 0;
}
