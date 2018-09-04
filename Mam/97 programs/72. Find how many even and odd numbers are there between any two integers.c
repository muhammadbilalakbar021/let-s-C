#include<stdio.h>
int main()
{
    int a,b,even=0,odd=0;
    printf("Enter number");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);

    while(a<=b)
    {
        if(a%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
        a++;
    }
    printf("%d is even numbers",even);
    printf("%d is odd",odd);
    return 0;
}
