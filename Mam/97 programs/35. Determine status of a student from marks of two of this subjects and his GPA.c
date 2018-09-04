#include<stdio.h>
int main()
{
    int mrk1,mrk2,gpa,rslt;
    printf("Enter marks 1 : \n");
    scanf("%d",&mrk1);
    printf("Enter marks 2 : \n");
    scanf("%d",&mrk2);
    printf("Enter your gpa");
    scanf("%d",&gpa);
    rslt=mrk1+mrk2;
    if(rslt>40)
    printf("You are passed %d",rslt);
    if(gpa>2)
        printf("You are passed");
        else
            printf("Fail");
    return 0;
}
