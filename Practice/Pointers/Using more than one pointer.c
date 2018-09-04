#include<stdio.h>
int main()
{
    int a,*b=0,**c=0,***d=0;
    printf("Enter any value : ");
    scanf("%d",&a);
    printf("The address of a = %p\n",&a);
    printf("The value of a before sending to pointer b = %d\n\n",a);

    b=&a;
    *b=*b + a;

    printf("The value of a after sending to pointer b = %d\n",a);
    printf("The value of pointer b = %d\n",*b);
    printf("The address of pointer b = %d\n\n",&b);

    c=&b;
    **c=**c + *b;

    printf("The value of a after sending to pointer c = %d\n",a);
    printf("The value of pointer b = %d\n",*b);
    printf("The value of pointer c = %d\n",**c);
    printf("The address of pointer c = %p\n\n",&c);

    d=&c;
    ***d=***d + **c;

    printf("The value of a after sending to pointer d = %d\n",a);
    printf("The value of pointer b = %d\n",*b);
    printf("The value of pointer c = %d\n",**c);
    printf("The value of pointer d = %d\n",***d);
    printf("The address of pointer d = %p\n",&c);

}
