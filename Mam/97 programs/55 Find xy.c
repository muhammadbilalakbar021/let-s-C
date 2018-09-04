#include<stdio.h>
int main()
{
    int a,b,c,power=1;
    printf("Enter number\n");
    scanf("%d",&a);
    printf("Enter power\n");
    scanf("%d",&c);
    for(b=1;b<=c;b++)
    {
        power*=a;
    }
    printf("%d",power);
    return 0;
}
