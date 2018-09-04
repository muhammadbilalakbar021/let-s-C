#include<stdio.h>

void constant(const int b[] );

int main(void)
{
    int a[]={1,2,3};

    constant(a);
    printf("%d\t%d\%d",a[0],a[1],a[2]);

}
void constant(const int b[] )
{
    b[0] *=2;
    b[1] *=2;
    b[2] *=2;
}
