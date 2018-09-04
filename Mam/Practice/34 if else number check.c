#include<stdio.h>
int main()
{
        int number1,number2;
        printf("Enter two numbers\n");
        scanf("%d%d",&number1,&number2);

        if(number1 == number2)
        {
                    printf("%d is equals to %d",number1,number2);
        }
        else if(number1 > number2)
        {
                    printf("%d is greater than %d",number1,number2);
        }
        else
        {
            printf("%d is less than %d",number1,number2);
        }
}
