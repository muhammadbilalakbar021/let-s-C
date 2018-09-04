#include<stdio.h>
#include<conio.h>
int main()
{
    float f,m,v,r;
    printf("Enter mass of the object : \n");
    scanf("%f",&m);
    printf("Enter the velocity of object : \n");
    scanf("%f",&v);
    printf("Enter radius of object : \n");
    scanf("%f",&r);
    f=(m*(v*v))/r;
    printf("The total force = %f",f);
    }
