#include<stdio.h>
int main()
{
    int a,b=1,c=1,even=0;
    printf("Enter number you want to print sum \n");
    scanf("%d",&a);

    while(b<=a)
    {
        if(b%2==0)
        {even=even+b;}
        b++;
    }
    printf("%d",even);
    return 0;
}
