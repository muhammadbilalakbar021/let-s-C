#include<stdio.h>
int main()
{
    const int a,c;
    int *b;
    printf("Enter the value :");
    scanf("%d",&a);
    b=&a;
    printf("The value you entered is %d",*b);
    puts("");
    printf("Enter an other integer :");
    scanf("%d",&c);
    *b=c;
    printf("The value of a is %d",a);

}
