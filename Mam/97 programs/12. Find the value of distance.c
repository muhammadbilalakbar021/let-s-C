#include<stdio.h>
int main()
{
    int x,v,t,a;
    float D;
    printf("Enter the value of x : \n");
    scanf("%d",&x);
    printf("Enter the value of v : \n");
    scanf("%d",&v);
    printf("Enter the value of t : \n");
    scanf("%d",&t);
    printf("Enter the value of a : \n");
    scanf("%d",&a);
    D = x +(v*t)+(a*t*t)/2;
    printf("Value of D 9s %f",D);
    return 0;
    }
