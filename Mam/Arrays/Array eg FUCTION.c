#include<stdio.h>
void stf(void);
void atf(void);

int main(void)
{
    puts("\t\t\t1 st run");
    stf();
    atf();

    puts("\t\t\t2nd run");
    stf();
    atf();

    puts("\t\t\t3nd run");
    stf();
    atf();

}
void stf(void)
{
    static int aray1[5];
    size_t i;
printf("On 1 static\n");
    for(i=0;i<5;++i)
    {

        printf("array1[ %u ] %d\t",i,aray1[i]);
    }
    printf("\nOn 2 static\n");
    for(i=0;i<5;++i)
    {

        aray1[i] +=2;
        printf("array1[ %u ] %d\t",i,aray1[i]);
    }
    printf("\n-----------------");
}


void atf(void)
{
    int aray2[5]={1,2,3,4,5};
    size_t j;
printf("\nOn 1 automatic\n");
    for(j=0;j<5;++j)
    {

        printf("array2[ %u ] %d\t",j,aray2[j]);
    }
printf("\nOn 2 automatic\n");
    for(j=0;j<5;++j)

      {
        aray2[j] =aray2[j]*2;
        printf("array2[ %u ] %d\t",j,aray2[j]);
      }
       printf("\n----------------------\n");
}
