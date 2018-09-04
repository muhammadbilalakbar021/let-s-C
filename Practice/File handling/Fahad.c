#include<stdio.h>
int main()
{
    int acount;
    FILE *ptr;

    if((ptr=fopen("dat.dat","w"))==NULL)
    {
        printf("Error");
    }
    else
    {
        printf("Enter account nomber");
        scanf("%d",&acount);
    }

}
