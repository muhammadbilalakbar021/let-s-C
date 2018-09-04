#include<stdio.h>
int main()
{
    int array[3]={1,2,3};
    size_t i;
    int *p;

    printf("The values are :\n");
    for(i=0;i<3;i++)
    {
        printf("The value of array[%d] = %d\n",i+1,array[i]);
        printf("The address of array[%d] = %p\n",i+1,&array[i]);
        puts("");
    }
    puts("");
    p=array;
    for(i=0;i<3;i++)
    {
        printf("The value of pointer[%d] = %d\n",i+1,*p);
        printf("The address of pointer[%d] = %p\n",i+1,&p);
        printf("The address in pointer[%d] = %p\n",i+1,p);
        p++;
        puts("");
    }

        printf("The current value of pointer is %d\n",*p);
        printf("The current address of pointer is %d\n",p);
        p++;
        puts("");

        ++p;
        printf("The current value of pointer is %d\n",*p);
        printf("The current address of pointer is %d\n",p);
        puts("");

        ++*p;
        printf("The current value of pointer is %d\n",*p);
        printf("The current address of pointer is %d\n",p);
        puts("");

        //--p;
        //printf("The current value of pointer is %d\n",*p);
        //printf("The current address of pointer is %d\n",p);
        puts("");

        *p++;
        printf("The current value of pointer is %d\n",*p);
        printf("The current address of pointer is %d\n",p);
        puts("");




}
