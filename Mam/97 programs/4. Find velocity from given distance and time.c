#include<stdio.h>
#include<conio.h>
int main()
    {
    float velocity,distance,time;
    printf("Enter distance in km");
    scanf("%f",&distance);
    printf("Enter time in seconds");
    scanf("%f",&time);
    velocity=distance/time;
    printf("your velocity is %f km/sec",velocity);
    return 0;
    }
