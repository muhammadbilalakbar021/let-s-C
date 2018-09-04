#include<stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    if(b<0 && b>10)
        {
            c=a/b;
            printf("Program answer is %.2f",c);
        }
        else
        {
            printf("Nothing");
        }
        return 0;
}
