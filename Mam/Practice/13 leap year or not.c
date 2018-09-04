#include<stdio.h>
#include<conio.h>
int main()
 {

       int year;
        printf("Enter the year u want to check\n");
        scanf("%d",&year);
        if(year%400==0)
        printf("%d is a leap year\n",year);
        else if(year%100==0)
        printf("%d year is not a leap year\n",year);
        else if (year%4==0)
        printf("%d is a leap year\n",year);
        else
        printf("%d is a not leap year\n",year);
        system("pause");
        return 0;
        }
