#include<stdio.h>
int odd(int a, int b );
int main()
{
    int num1,num2,d;
    printf("Enter the lowest range : ");
    scanf("%d",&num1);
    printf("Enter the highest range : ");
    scanf("%d",&num2);
    odd(num1,num2);

    //printf("%d\t",odd(num1,num2));

}
int odd(int a, int b )
{
    while(a<=b)
    {
        if(a%2 == 1)
        {
            printf("%d \t",a);
            //return a;
        }
        a++;
    }

}
