#include<stdio.h>
int main()
{
    int m,v,g,h;
    float E;
    printf("Enter value of m,v,g,h ");
    scanf("%d%d%d%d",&m,&v,&g,&h);
    E=(m*v*v)/2 +m*g*h;
    printf("Your value of E = %.2f",E);
    return 0;
    }
