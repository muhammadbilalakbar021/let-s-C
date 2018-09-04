//28. Determine whether the “Product” of two numbers is negative or not.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number 1 : \n");
    scanf("%d",&a);
    printf("Enter number 2 : \n");
    scanf("%d",&b);
    c=a*b;
    if(c<0)
        printf("Product is negative %d",c);
    else
        printf("Product is positive");
    return 0;
}
