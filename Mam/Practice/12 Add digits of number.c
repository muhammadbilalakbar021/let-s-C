#include<stdio.h>
#include<conio.h>
int main()
{
        int number,sum=0,remainder;
        printf("enter an integer\n");
        scanf("%d",&number);
        while(number !=0)
        {
        remainder=number%10;
        sum=sum+remainder;
        number=number/10;
        }
        printf("sum of the %d = %d",number,sum);
        return 0;
        }
