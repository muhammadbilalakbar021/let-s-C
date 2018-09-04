#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter amount in millions");
    scanf("%d",&a);
    printf("Enter the engine capacity ");
    scanf("%d",&b);

    if(a>1 || a<2)
     printf("Your car size is mid");
    if(b>1000 || 1500)
    printf("Your car size is mid");
    return 0;
}
