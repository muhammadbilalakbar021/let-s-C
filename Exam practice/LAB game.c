#include<stdio.h>
#include<stdlib.h>
// Initializing array
int search(int ar[] , int b ,int d);

int main()
{
    int aray[100];
    size_t a;  //counter loop
    int b;

    printf("Now we are going to play game \n");
    printf("We are generating 20 different numbers \n");

    for(a=0;a<20;++a)  // selecting rndom numbers
    {
        aray[a]=1+rand()%100;
    }

        printf("Enter your guess : \n"); //asking user for guess
        scanf("%d",&b);


    search(aray,a,b);  //passing array
}
int search(int ar[] , int a ,int d)
{
    int b;
    for(d=1;d<=100;d++)

    {
        if(ar[a]==b)
            {printf("You have a very good guess");
        exit(0);}
        else
            printf("try again");
    }
}
