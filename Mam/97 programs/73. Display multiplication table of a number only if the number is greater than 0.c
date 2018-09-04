#include<stdio.h>
int main()
{
    int a,b,c=1,tble;
    printf("Enter a number of which you want to print table\n");
    scanf("%d",&a);
    printf("Enter a number from where you want to print table\n");
    scanf("%d",&b);
    for(c=1;c<=b;++c)
    {
        tble=a*c;
        printf("%d*%d=%d\n",a,c,tble);
    }
    return 0;
}
