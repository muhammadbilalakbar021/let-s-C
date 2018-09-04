#include<stdio.h>
int main()
{
    int a,b=1,c,even,odd;
    printf("Enter any number to check even/odd numbers : \n");
    scanf("%d",&a);
    for(b;b<=a;b++)
    {
        if(b%2==0)
        {
            printf("%d is even \n",b);
        }
        else
        {
            printf("%d is odd \n",b);
        }
    }
    return 0;

}
