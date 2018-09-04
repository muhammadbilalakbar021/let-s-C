#include<stdio.h>
int main()
{
    int a,b,c=1,odd=0;
    printf("Enter first number \n");
    scanf("%d",&a);
    printf("Enter second number \n");
    scanf("%d",&b);
    while(a<=b)
    {
        if(a%2!=0)
        {
            odd=odd+a;
        }
        a++;
    }
    printf("%d is sum",odd);
    return 0;
}
