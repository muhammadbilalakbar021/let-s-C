#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

        float a,b,result;
        char choice, ch;
    do
    {
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiply\n");
            printf("4. Divide\n");
            printf("5. Exit\n\n");
            printf("Enter your choice : ");
            scanf("%c",&choice);
switch(choice)
{
        case '1' : printf("Enter two number= ;");
        scanf("%f%f",&a,&b);
        result=a+b;
        printf("Result=%f",result);
        break;
        case'2' : printf("Enter two numbers=");
        scanf("%f%f",&a,&b);
        result=a-b;
        printf("Result=%f",result);
        break;
        case '3' : printf("Enter two numbers= ");
        scanf("%f%f",&a,&b);
        result=a*b;
        printf("Result=%f",result);
        break;
        case '4' : printf("Enter two numbers=");
        scanf("%f%f",&a,&b);
        result=a/b;
        printf("Result=%f",result);
        break;
        case'5' : exit(0);
        break ;
        default : printf("wrong choice");
        break;
}
printf("\n----------------------------------\n");
}while (choice !=5 && choice!=getchar());
getch();

return 0;
}
