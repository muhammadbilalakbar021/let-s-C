#include<stdio.h>
int main()
{
    int a;
    int *b;
    b=&a;
    printf("Enter the value a :");
    scanf("%d",&a);

    printf("The value of pointer is %d\n",*b);
    printf("The address of pointer is %p\n",&b);
    printf("The address in  pointer is %p\n",*b);
}
