#include<stdio.h>
#define SIZE 5
int main()
{
    char aray[SIZE],a;



    int pass,temp;

    printf("Enter 5 characters : \n");
    for(a=0;a<SIZE;++a)
    {
        scanf("%c",&aray[a]);
    }
    printf("The characters you entered in ARAY are : \n");
    for(a=0;a<SIZE;++a)
    {
        printf("array[%d]=%c\n",a,aray[a]);
    }

        for(pass=1;pass<SIZE;++pass)
        {
            for(a=0;a<SIZE-1;++a)
            {
                if(aray[a]>aray[a+1])
                {
                temp=aray[a];
                aray[a]=aray[a+1];
                aray[a+1]=temp;
                }
            }
        }
        for(a=0;a<SIZE;++a)
        {
            printf("aray[%d]=%c\n",a,aray[a]);
        }
}
