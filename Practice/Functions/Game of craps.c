#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

enum status{CONTINUE , WON , LOSE};
int roll(void);

int main()
{
    int points;
    int fnction;

    enum status gameStatus;
    srand(time(NULL));

    fnction=roll();

    switch(fnction)
    {
        case 7:
        case 11:
        gameStatus=WON;
        break;

        case 2:
        case 3:
        case 12:
        gameStatus = LOSE;
        break;

        default:
        gameStatus=CONTINUE;
        points=fnction;
        printf("\nMy points  is %d\n",points);
    }

    while(gameStatus==CONTINUE)

    {
        fnction=roll();

                if(fnction==points)
                gameStatus=WON;
                if(fnction==7)
                gameStatus=LOSE;
    }
    if(gameStatus=WON)
        printf("you won");
    else
        printf("yOU LOSE");

}
int roll(void)
{
    int b;
    int roll_1;
    int roll_2;

    roll_1=1+rand()%6;
    roll_2=1+rand()%6;
    b=roll_1+roll_2;
    printf("\nPlayer rolled %d + %d = %d  ",roll_1,roll_2,b);
    return b;
}
