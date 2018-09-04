#include<stdio.h>
#include<conio.h>
int main()
{
    float acc,vi,vf,t;
    printf("Enter final velocity : \n");
    scanf("%f",&vf);
    printf("Enter initial velocity : \n");
    scanf("%f",&vi);
    printf("Enter time : \n");
    scanf("%f",&t);
    acc=(vf-vi)/t;
    printf("your acceleration is %f",acc);

    return 0;
    }
