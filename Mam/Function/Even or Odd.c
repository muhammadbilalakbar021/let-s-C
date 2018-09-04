#include<stdio.h>
int check(int );
int main()
{
    int a;
    printf("Enter number \n");
    scanf("%d",&a);
    check(a);
    return 0;
}
int check(int a)
{
    if(a%2==0)
        printf("%d is even ",a);
    else
        printf("%d is odd",a);
return 0;
}
