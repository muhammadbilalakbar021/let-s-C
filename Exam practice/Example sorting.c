#include<stdio.h>
#define SIZE 10

int main()
{
    int example[SIZE]={0};
    int a,pas,temp;

    printf("Enter 10 values :\n");
    for(a=0;a<SIZE;a++)
    {
        scanf("%d",&example[a]);
    }

    for(a=0;a<SIZE;a++)
    {
        printf("example[%d]=%d\n",a,example[a]);
    }


    for(pas=1;pas<SIZE;++pas)
    {
        for(a=0;a<SIZE-1;a++)
        {
            if(example[a]>example[a+1])
            {
                temp=example[a];
                example[a]=example[a+1];
                example[a+1]=temp;
            }

        }
    }
    printf("Aray in sorted form is : \n");
    for(a=0;a<SIZE;a++)
    {
        printf("example[%d]=%d\n",a,example[a]);

    }

}
