#include<stdio.h>
int main()
{
        float first,second,add,subtract,multiply,divide;
        printf("Enter two numbers : ");
        scanf("%f%f",&first,&second);

        add=first+second;
        subtract=first-second;
        multiply=first*second;
        divide=first/second;

        printf("add =%f\n",add);
        printf("subtract =%f\n",subtract);
        printf("multiply =%f\n",multiply);
        printf("divide =%f\n",divide);

        system("pause");
        return 0;
}
