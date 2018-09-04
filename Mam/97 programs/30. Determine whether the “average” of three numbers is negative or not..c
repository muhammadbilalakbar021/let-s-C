//30. Determine whether the “average” of three numbers is negative or not.
#include<stdio.h>
int main()
{
    float d;
    int a,b,c,e;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&c,&b);
    e=a+b+c;
    d=e/3.0;
    if(d<0)
        printf("Average is negative %.2f",d);
    else
        printf("Average is non negative %.2f",d);
        return 0;

}
