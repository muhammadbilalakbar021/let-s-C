#include<stdio.h>
int main()
{
    int a,b,c=0,d=1;
    printf("Enter the number to print series ");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        d=d+c;
        c=c+1;
        printf("%d\n",d);
    }
    return 0;
}
