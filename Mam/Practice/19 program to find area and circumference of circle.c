#include<stdio.h>
#include<conio.h>

int main()
{

        int radius;
        float PI=3.142, circum,area;

        printf("Enter the value of radius/n");
        scanf("%d",&radius);
        area=PI*radius*radius;
        printf("\n The Area Of circle is %f\n",area);

        circum=2*PI*radius;
        printf("\n The Circumference of circle is %f \n",circum);

        return 0;
    }
