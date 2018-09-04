#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int match_sticks=21,comp,user,flag=0;
    while(match_sticks>=1)
    {
        printf("\n==> Enter the no you want to enter : \n");
        scanf("%d",&user);
        match_sticks=match_sticks-user;
        printf("* Remaining match sticks are %d\n",match_sticks);

        if(match_sticks>4)
           comp=1+rand()%5;
        else
           comp=1+rand()%match_sticks;

        printf("=> You select %d matchsticks \n",user);
        printf("==>Comp select %d matchsticks\n",comp);

        match_sticks=match_sticks-comp;
        printf("* Remaining match sticks are %d\n",match_sticks);

if(match_sticks==1)
           {
             flag=1;
             break;
           }

    }
    if(flag==1)
        printf("User");
    else
        printf("Com");
    return 0;
}
