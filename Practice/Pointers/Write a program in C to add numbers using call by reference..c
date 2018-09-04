#include<stdio.h>
int pass(int *, int *);
int main()
{
    int no1,no2;
    int *nu1,*nu2;
    nu1=&no1;
    nu2=&no2;
    int p;
    printf("Enter first number :");
    scanf("%d",&no1);
    printf("Enter second number :");
    scanf("%d",&no2);
    p=pass(nu1,nu2);
    printf("The sum =%d",p);

}
int pass(int *nu1, int *nu2)
{
    int i;
    i=*nu1 + *nu2;
    return i;
}
