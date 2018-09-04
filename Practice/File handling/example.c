#include<stdio.h>
int main()
{
    int acount_no;
    int balance;
    char name[20];

    FILE *cfptr;
    if((cfptr=fopen("data.dat","r"))==NULL)
    {
        printf("Error");
    }
    else
    {
        printf("Enter the account number :");
        fscanf(cfptr,"%d",&acount_no);
        printf("Enter balance :");
        fscanf(cfptr,"%d",&balance);
        printf("Enter name ");
        fscanf(cfptr,"%s",name);

        while(!feof(cfptr))
        {
        fprintf(cfptr,"%d %d %s \n",acount_no,balance,name);
        printf("Enter the account number :");
        fscanf(cfptr,"%d",&acount_no);
        printf("Enter balance :");
        fscanf(cfptr,"%d",&balance);
        printf("Enter name ");
        fscanf(cfptr,"%s",name);
       // scanf("%d%d%s",&acount_no,&balance,name);
        }
        fclose(cfptr);
    }
    return 0;
}
