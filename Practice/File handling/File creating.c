#include<stdio.h>
int main()
{
    int acount_no;
    int balance;
    char name[20];

    FILE *cfptr;
    if((cfptr=fopen("data.dat","w"))==NULL)
    {
        printf("Error");
    }
    else
    {
        printf("Enter the account number :");
        scanf("%d",&acount_no);
        printf("Enter balance :");
        scanf("%d",&balance);
        printf("Enter name ");
        scanf("%s",name);

        while(!feof(stdin))
        {
        fprintf(cfptr,"%d %d %s \n",acount_no,balance,name);
        printf("Enter the account number :");
        scanf("%d",&acount_no);
        printf("Enter balance :");
        scanf("%d",&balance);
        printf("Enter name ");
        scanf("%s",name);
       // scanf("%d%d%s",&acount_no,&balance,name);
        }
        fclose(cfptr);
    }
    return 0;
}
