#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int max,number,i;
    printf("Enter the maximum random numbers \n");
    scanf("%d",&number);
    printf("Enter the number \n");
    scanf("%d",&max);

    for(i=1;i<=number;i++)
    {
        int x;
        x=1+rand()%max;
        printf("%d\n",x);
    }
    return 0;
}
