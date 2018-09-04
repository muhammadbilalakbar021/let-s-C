#include<stdio.h>
int main()
{
        int c,n,fact=1;
        printf("enter the number u want to check the factorial : ");
        scanf("%d",&n);
        for(c=1; c<=n; c++)
        fact=fact*c;
        printf("your %d factorial is = %d",n,fact);
        system("pause");
        return 0;
    }
