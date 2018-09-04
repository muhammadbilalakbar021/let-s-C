#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    printf("Rules of the games are : \n");
        printf("You win if the first roll is a natural (7, 11)\n");
        printf("You lose if it is craps (2, 3, 12).\n");
        printf("If a point is rolled (4, 5, 6, 8, 9, 10) \n");
        printf("it must be repeated before a 7 is thrown in order to win.\n");
        printf("If 7 is rolled before the point you lose.\n");
    printf("\nEnter 1 to play game \n");
    printf("Enter 2 to exit game \n");
    scanf("%d",&a);

    if(a==1)
    {

        b=1+rand()%12;
        printf("%d is come",b);

        if(b==7 || b==11)
        {
            printf("You wins");
            exit(0);

        }
        if(b==2 || b==3 ||b==12)
        {
            printf("You lose");
            exit(0);
        }
        if(b==4 || b==5 || b==6 || b==8 || b==9 || 10)
        {
            while(c!=7 )
            {
                c=1+rand()%12;
                printf("You got %d\n",c);
            }
            if (c==7)
            {
                printf("%d you lose\n",c);
                exit(0);
            }
            if (c==b)
                printf("%d you win",c);
                exit(0);

        }

    }
    if(a==2)
    {
        exit(0);
    }
    return 0;
}
