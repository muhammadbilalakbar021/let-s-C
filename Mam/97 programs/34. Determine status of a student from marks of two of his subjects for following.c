#include<stdio.h>
int main()
{
    int mrk1,mrk2,rslt;
    printf("Enter marks 1 : \n");
    scanf("%d",&mrk1);
    printf("Enter marks 2 : \n");
    scanf("%d",&mrk2);
    rslt=mrk1+mrk2;
    if(rslt>40)
    printf("You are passed %d",rslt);
    if(mrk1>40 || mrk2>40)
        printf("You are passed");
        else
            printf("Fail");
    return 0;
}
