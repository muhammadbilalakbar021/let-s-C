#include<stdio.h>
int leap(int);

int main()
{
    int year;
    printf("Enter a year \n");
    scanf("%d",&year);
    leap(year);
}
int leap(int year)
{
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not 1 a leap year.", year);
        }
        else
            printf("%d is a 2 leap year.", year );
    }
    else
            printf("%d is not 3 leap year.", year );
}
