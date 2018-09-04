#include<stdio.h>
#define SIZE 5

int fnc(int [] , int);

int main()
{
    int b[SIZE];
    size_t a;
    printf("Enter 5 numbers \n");
    for(a=0;a<SIZE;a++)
    {
        scanf("%d",&b[a]);
    }
    printf("Your entered numbers are : \n");
    for(a=0;a<SIZE;a++)
    {
        printf("b[%d]=%d\n",a,b[a]);
    }

    fnc(b,a);
    printf("Your modified array is :\n");
    for(a=0;a<SIZE;a++)
    {
        printf("b[%d]=%d\n",a,b[a]);
    }
}
int fnc(int b[] , int a)
{
    for(a=0;a<SIZE;a++)
    {
        b[a] *=2;
    }
}
