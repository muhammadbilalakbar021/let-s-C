#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ms=21,usr,comp,flag=0;

    printf("Total number of matchsticks are 21\n");
    while(ms>=1)
    {
        printf("Choose numbers from 1 - 5\n");
        scanf("%d",&usr);

            ms=ms-usr;

        if(ms>4)
           comp=1+rand()%5;
        else
           {comp=1+rand()%ms;
           printf("Computer selected =%d\n",comp);
           ms=ms-comp;}

        printf("Remaining matchsticks are %d\n",ms);

        if(ms==1)
        {
            flag=1;
            break;
        }


    }
    if(flag==1)
        {
            printf("User lose");
        }
        else
            printf("Computer lose");
            return 0;

}
