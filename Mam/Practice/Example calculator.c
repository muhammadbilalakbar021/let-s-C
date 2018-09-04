#include<stdio.h>
#include<conio.h>
main()
{
        float a,b,result;
        char ch;
    do{
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Exit\n\n");
    printf("Enter your choice : \t");
    scanf("%c",&ch);
                            switch(ch)
                            {

                                        case '1' : printf("Enter two numbers for addition ==>");
                                        scanf("%f%f",&a,&b);
                                        result=a+b;
                                        printf("result =%f\n",result);
                                        printf("made by Bilal Akbar\n");
                                        break;

                                        case '2' : printf("Enter two numbers for subtraction ==>");
                                        scanf("%f%f",&a,&b);
                                        result=a-b;
                                        printf("result =%f",result);
                                        printf("made by bilal akbar\n");
                                        break;

                                        case '3' : printf("Enter two numbers for multiplication ==>");
                                        scanf("%f%f",&a,&b);
                                        result=a*b;
                                        printf("result =%f\n",result);
                                        printf("made by bilal akbar\n");
                                        break;

                                        case '4' : printf("Enter two numbers for division ==>");
                                        scanf("%f%f",&a,&b);
                                        result=a/b;
                                        printf("result=%f\n",result);
                                        printf("made by bilal akbar\n");
                                        break;

                                        case '5' : exit(0);
                                        printf(" see u soon");
                                        break;

                                        default : printf("wrong choice");
                                        break;

                }
                             printf("\n-----Thanks for calculating---------\n");
       } while (ch != 5 && ch !=getchar() );
getch();
        system("pause");


        }
