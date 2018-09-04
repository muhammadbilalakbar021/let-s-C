#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("Enter '1' to play game");
    scanf("%d",&a);
    if(a==1)
    {
        printf("What you will got \n");
        scanf("%d",&b);

        c=1+rand()%6;
        printf("%d",c);

        if(b==c)
            printf("You win");
        else
            printf("You lose");
    }
}
