
#include<stdio.h>
int main()
{
    int account;
    int credit;
    char name[20];

    FILE *p;

    if((p=fopen("bilal.dat","r"))==NULL )
    {
        printf("Error");
    }
    else
    {
        printf("%s%10s%10s\n","name","account","credit");
        fscanf(p,"%s%d%d",name,&account,&credit);

         while(!feof(p))
        {

            printf("%s%10d%10d\n",name,account,credit);
             fscanf(p,"%s%d%d",name,&account,&credit);

        }
        fclose(p);

    }
    return 0;
}
