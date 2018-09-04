#include<stdio.h>
int swp(int , int );
int main()
{
    int a,b;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    swp(a,b);
}
int swp(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d",a);
    printf("b=%d",b);
}
