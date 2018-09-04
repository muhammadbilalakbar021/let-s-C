#include<stdio.h>
int main()
{
    int account;
    int credit;
    char name[20];

    FILE *p;

    if((p=fopen("bilal.dat","w"))==NULL )
    {
        printf("Error");
    }
    else
    {
        printf("Enter your name :");
        scanf("%s",name);
        printf("Enter your account nnumber : ");
        scanf("%d",&account);
        printf("Enter your credit : ");
        scanf("%d",&credit);
        while(!feof(stdin))
        {
            fprintf(p,"%s  %d  %d",name,account,credit);
        printf("Enter your name :");
        scanf("%s",name);
        printf("Enter your account nnumber : ");
        scanf("%d",&account);
        printf("Enter your credit : ");
        scanf("%d",&credit);

        }
        fclose(p);
    }
    return 0;
}
