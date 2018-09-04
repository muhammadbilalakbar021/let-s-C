#include<stdio.h>
int facto(int , int, int);
int main()
{
    int a,b=1,fact=1;
    printf("Enter a number to check factorial \n");
    scanf("%d",&a);
    facto(a,b,fact);
    //printf("Your factorial is %d",facto(a,b,fact));
}
int facto(a , b, fact)
{
    for(b;b<=a;b++)
        fact=fact*b;
    printf("%d",fact);
    //return facto(a,b,fact);
}
