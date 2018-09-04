#include<stdio.h>

int pass(int *point);
int main()
{
    int a;
    printf("Enter a value : ");
    scanf("%d",&a);

    printf("The original  value is %d",a);
    pass(&a);

    printf("The new value is %d",a);
}
int pass(int *point)
{
    *point=*point * *point * *point;
    return(*point);
}
