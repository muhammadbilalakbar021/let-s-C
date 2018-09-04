#include<stdio.h>
int no(int ,int, int);
int main()
{
    int a,b,c;
    printf("enter a number to check \n");
    scanf("%d",&c);

    if (c==a)
    printf("Your number is negative %d",no(a,b,c));

    if (c==b)
    printf("Your number is not negative %d",no(a,b,c));
}
int no(int a, int b , int c)
{
    if (c<0)
        c==a;
        return a;
    if (c>0)
        c==b;
        return b;
}
