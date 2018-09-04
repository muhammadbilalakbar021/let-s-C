#include<stdio.h>
#include<string.h>
void passing(char * );
int main()
{
    char array[5][10];
    size_t i;
    int temp,pass;
    char *ptr;


    printf("Enter 5 names :\n");
    puts("=============");
    for(i=0;i<5;i++)
    {
        printf("Enter %d names :",i+1);
        scanf("%s",&array[i]);
    }
    //ptr=array;
    puts("----------------");
    printf("The names you entered are :\n");
    for(i=0;i<5;i++)
    {
            printf("&ptr[1] is %u\n",&ptr[i]);
        printf("The %d name is %s\n",i+1,array[i]);

    }
    passing(&array[0][0]);
    printf("The arreay in acending is \n");
     for(i=0;i<5;i++)
    {
        printf("The %d name is %s\n",i+1,array[i]);

    }

}
void passing(char *ptr)
{
    void swap(char * , char *);
    int i,b,j;
    printf("Start Passing\n");
    for(j=0;j<5;j++)
    {
    printf("In outer for\n");
        for(i=0;i<5-1;i++)
    {
    printf("In inner for\n");
        b=strcmp(&ptr[i],&ptr[i+1]);
            printf("b=%d\n",b);

        if(b>0)
        {
    printf("If b>0\n");
            printf("&ptr[1] is %p\n",&ptr[i]);
    printf("&ptr[2] is %p\n",&ptr[i+1]);
            swap(&ptr[i],&ptr[i+1]);
                printf("After swap\n");

        }
    }
    }

}
void swap(char *a1 , char *a2)
{
    char *temp;
        printf("start swap\n");
            printf("a1 is %p\n",a1);
    printf("a2 is %p\n",a2);

            printf("a1 is %s\n",*a1);
    printf("a2 is %s\n",*a2);

    *temp=*a1;
    *a1=*a2;
    *a2=*temp;
        printf("End swap\n");

}
