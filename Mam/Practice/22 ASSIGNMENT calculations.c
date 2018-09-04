#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
        char ch,choice;
    do {
    int number1,number2,result;
    printf("1. Enter + for addition\n");
    printf("2. Enter - for subtraction\n");
    printf("3. Enter * for multiplication\n");
    printf("4. Enter / for quotient\n");
    printf("5. Enter M for remainder\n");
    scanf("%c",&ch);



printf("Enter your 1st number=\n");
scanf("%d",&number1);
printf("Enter your 2nd number=\n");
scanf("%d",&number2);

switch(ch){
        case '+' : result=number1+number2;
        printf("result for addition is %d\n",result);
        break;

        case '-' :result=number1-number2;
        printf("Result fo subtraction is %d \n",result);
        break;

        case '*' : result=number1*number2;
        printf("Result for multi is %d\n",result);
        break;

        case '/' : result=number1/number2;
        printf("Result for quotient is %d\n",result);
        break ;

        case 'M' : result=number1%number2;
        printf("result for mod is %d\n", result);
        break;




        default:printf("invalid");
        break;
        }
        printf("if u want to continue press 'y' or 'no' to cancel\n");


        }while(ch != 'n');
        getch();

}
