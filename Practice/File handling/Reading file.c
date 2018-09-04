#include<stdio.h>
int  main()
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
       printf("%10s%10s%10s\n","Account_no","amount ","name");
       fscanf(cfptr,"%d%d%s",&acount_no,&balance,name);
       while(!feof(cfptr))
       {
        printf("%10d%10d%10s\n",acount_no,balance,name);
       fscanf(cfptr,"%d%d%s",&acount_no,&balance,name);

       }
    }
}
