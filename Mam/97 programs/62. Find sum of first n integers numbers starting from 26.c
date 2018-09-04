#include<stdio.h>
int main()
{
    int a,b,c,sum=0;
    printf("Enter the number to print sum ");
    scanf("%d",&a);

    for(c=26;c<=a;c++)
    {
        sum=sum+c;
    }
    printf("Your sum is %d",sum);
    return 0;
}
