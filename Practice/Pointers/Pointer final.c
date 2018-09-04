#include<stdio.h>

int pass(char cal ,int * , int * ,int ,int ,int, int );

int main()
{
    char cal;
    int i,d,fact=1,j;
    int no1,no2;
    int *no1_ptr,*no2_ptr;
    int result;
    printf("---This is a basic calculator---");
    puts("-------------------");
    printf("For some calculations :\n");
    puts("-------------------");
    printf("Enter '+' for addition\n");
    printf("Enter '-' for subtraction\n");
    printf("Enter '*' for multiplication\n");
    printf("Enter '/' for division\n");
    printf("Enter '!' for factorial\n");
    printf("Enter '^' for power\n");
    scanf("%c",&cal);
    puts("-------------------");
    no1_ptr=&no1;
    no2_ptr=&no2;
    printf("Enter first number :");
    scanf("%d",&no1);
    printf("Enter second number :");
    scanf("%d",&no2);
    puts("-------------------");

    //cal=getchar();
    result=pass(cal,&no1,&no2,i,d,fact,j);
    printf("The result is %d",result);
}
int pass(char cal , int *no11 , int *no22 , int i ,int d  ,int fact ,int j)
{
    int result;
    switch(cal)
        {
        case '+' :
            result=*no11 + *no22;
            return result;
            break;

        case '-' :
            result=*no11 - *no22;
            return result;
            break;

        case '*' :
            result=*no11 * *no22;
            return result;
            break;

        case '/' :
            result=*no11 / *no22;
            return result;
            break;
        case '!' :

            printf("For which number you want to take factorial : 1 or 2\n");
            scanf("%d",&i);
            if(i==1)
            {
             for(d=1;d<=*no11;d++)
             {
                fact=fact*d;
             }
            }
           // if(i==2)
           else
            {
             for(d=1;d<=*no22;d++)
             {
                fact=fact*d;
             }
            }
            return fact;
            break;
        case '^' :

            printf("For which number you want to take power : 1 or 2\n");
            scanf("%d",&i);
            printf("And what is exponent : ");
            scanf("%d",&d);
            if(i==1)
            {
             for(j=1;j<=d;j++)
             {
                fact=fact * *no11;
             }
             return fact;
            }
            else
            {
             for(j=1;j<=d;j++)
             {
                fact=fact * *no22;
             }
            }
            return fact;
            break;

        }
        printf("Thanks for using \n");
        puts("---------");
}
