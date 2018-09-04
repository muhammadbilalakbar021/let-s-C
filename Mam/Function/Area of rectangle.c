#include<stdio.h>
int area (int a, int b);
int main()
{
    int base,height;
    printf("Enter base\n");
    scanf("%d",&base);
    printf("Enter height\n");
    scanf("%d",&height);
    printf("Your area of rectangle is %d",area(base,height));

}
int area(int a, int b)
{
    return a*b;
}
