#include<stdio.h>
int main()
{
    int a,b;
    int *c,*d;
    printf("Enter the first value :");
    scanf("%d",&a);
    printf("Enter the second value :");
    scanf("%d",&b);
    puts("");
    c=&a;
    d=&b;
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("The number after swapping are :\n");
    puts("");
    printf("First number is %d\n",*c);
    printf("Second number is %d",*d);

}

