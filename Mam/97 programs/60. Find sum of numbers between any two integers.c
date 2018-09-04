#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter first number \n");
    scanf("%d",&b);
    printf("Enter second number \n");
    scanf("%d",&a);

    while(b<a)
    {
        sum=sum+b;
        b++;
    }
    printf("%d",sum);
    return 0;
}
