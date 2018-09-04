#include<stdio.h>
int main()
{
    int a,b=1,c=1,odd=0;
    printf("Enter number you want to print sum \n");
    scanf("%d",&a);

    while(b<=a)
    {
        if(b%2!=0)
        {odd=odd+b;}
        b++;
    }
    printf("%d",odd);
    return 0;
}
