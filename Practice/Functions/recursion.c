#include<stdio.h>
 int fact( int number);
 int main()
 {
     int i;
     printf("Enter a number");
     scanf("%d",&i);

     printf("Your factorial is %d",fact(i));
 }
 int fact(int number)
 {
     if(number<=1)
        return 1;
     else
        return(number*fact(number-1));
 }
