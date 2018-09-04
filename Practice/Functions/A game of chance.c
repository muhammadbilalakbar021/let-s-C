#include<stdio.h>
#include<stdlib.h>

int ran(int a);
int main()
{
    int var,b,c,a;
    printf("This is the game of craps \n");
    printf("You win if the first roll is a natural (7, 11)\n");
    printf("You lose if it is craps (2, 3, 12).\n");
    printf("If a point is rolled (4, 5, 6, 8, 9, 10) \n");
    printf("it must be repeated before a 7 is thrown in order to win.\n");
    printf("If 7 is rolled before the point you lose.\n");

    if(b==7 || b==11)
    {
        printf("You win");
    }
    if(b==2 || b==3 || b==12)
    {
        printf("You lose");
    }
    if(b==4 ||b==5 ||b==6 ||b==8 ||b==9 ||b==10)
    {
        while(var !=7)
        {
            c=ran(a);
            if(var==7)
            {
                printf("You lose");
            }
            if(var==b)
            {
                printf("You win");
            }
        }
    }
}
int ran(int a)
{
    int b;
    int roll_1;
    int roll_2;

    roll_1=1+rand()%6;
    roll_2=1+rand()%6;
    b=roll_1+roll_2;
    return b;
}
