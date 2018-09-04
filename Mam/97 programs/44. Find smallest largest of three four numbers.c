#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    printf("Enter third number : \n");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("%d is greatest ",a);
    else if(b>c && b>a)
        printf("%d is greatest ",b);
    else if(c>b && c>a)
        printf("%d is greatest ",c);



    if(a<b && a<c)
        printf("%d is smallest ",a);
    else if(b<c && b<a)
        printf("%d is smallest ",b);
    else if(c<b && c<a)
        printf("%d is smallest ",c);
    return 0;
}
