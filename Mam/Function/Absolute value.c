#include<stdio.h>
int abs(int a);
int main()
{
    int a;
    printf("Enter the value of nymber\n");
    scanf("%d",&a);
    printf("Your absolute value is = %d",abs(a));

}
int abs(int a)
{
    if (a<0)
        a=a*-1;
    return a;
}
