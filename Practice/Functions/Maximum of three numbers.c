#include<stdio.h>

int max(int number1, int number2 ,int number3 );

int main()
{
    int num1;
    int num2;
    int num3;


    printf("Program to find largest of three numbers \n");
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("\nEnter second number : ");
    scanf("%d",&num2);
    printf("\nEnter third number : ");
    scanf("%d",&num3);

    printf("The maximum is %d  ",max(num1,num2,num3));

}
int max(int number1, int number2 ,int number3 )
{
    int maxi;
        if(number1>number2 && number1>number3)
        {
            maxi=number1;
        }
        if(number2>number1 && number2>number3)
        {
            maxi=number2;
        }
        if(number3>number2 && number3>number1)
        {
            maxi=number3;
        }
        return maxi;
}


