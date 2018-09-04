#include<stdio.h>
int swap(int *a , int *b);
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
    swap(&c,&d);
    printf("The number after swapping are :\n");
    printf("First number is %d",*c);
    printf("Second number is %d",*d);

}
int swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
