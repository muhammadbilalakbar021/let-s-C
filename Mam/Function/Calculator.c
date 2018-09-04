#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a,int b);

int main()
{
    int no1,no2;
    printf("Enter two numbers \n");
    scanf("%d%d",&no1,&no2);
    add(no1,no2);
    sub(no1,no2);
    mult(no1,no2);
    div(no1,no2);
    printf("sum = %d\n",add(no1,no2));
    printf("subtraction = %d\n",sub(no1,no2));
    printf("Multiply =%d\n",mult(no1,no2));
    printf("Division =%d\n",div(no1,no2));
}
int add(int no1, int no2)
{
    return no1+no2;
}
int sub(int no1, int no2)
{
    return no1-no2;
}
int mult(int no1, int no2)
{
    return no1*no2;
}
int div(int no1,int no2)
{
    return no1/no2;
}
