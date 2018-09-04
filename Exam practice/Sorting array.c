#include<stdio.h>
#define SIZE 10
int main()
{
    int aray[SIZE]={4,2,6,8,13,9,22,16,32,14};
    size_t a;
    int passes,temp;

    for(a=0;a<SIZE;++a)
    {
        printf("array[%d]=%d\n",a,aray[a]);
    }
    for(passes=1;passes<SIZE;++passes)
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
for(a=0;a<10;++a)
        {
            printf("NUmbers is sorted are%4d\n",aray[a]);
        }
}
