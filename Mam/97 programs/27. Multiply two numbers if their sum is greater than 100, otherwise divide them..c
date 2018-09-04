//27. Multiply two numbers if their sum is greater than 100, otherwise divide them.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c>100)
        {
            c=a*b;
        printf("Product is %d",c);
        }
    if(c<100)
    {
    c=a/b;
    printf("Divide = %d",c);
    }
        return 0;

}

