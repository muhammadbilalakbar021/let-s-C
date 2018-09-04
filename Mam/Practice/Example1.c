#include<stdio.h>
int main()
{
        int a,n,sum=0;
        float ave;
        printf("Enter your ten numbers \n");
        for(a=1;a<=10;a++)
        {
                printf("Number %d :-",a);
                scanf("%d",&n);
                sum +=n;


        }
        ave=sum/10.0;
        printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,ave);
        }
