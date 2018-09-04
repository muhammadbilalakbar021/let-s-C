#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter number to print even numbers : \n");
    scanf("%d",&a);
    while(b<=a)
    {
        if(b%2==0)
            printf("%d",b);
        b++;
    }
    return 0;
}
