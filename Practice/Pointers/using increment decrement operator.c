#include<stdio.h>
int main()
{
    int array[3]={1,2,3};
    int *pointer;
    int i;
    for(i=0;i<3;i++)
    {
        printf("The address of array[%d]= %p\n",(i+1),&array[i]);
        printf("The value of array[%d]= %d",(i+1),array[i]);
        puts("");

        pointer=&array[i];
        printf("The address of pointer[%d]= %p\n",(i+1),&pointer);
        printf("The address on pointer[%d]= %p\n",(i+1),pointer);
        printf("The value of pointer[%d]= %d\n",(i+1),*pointer+array[i]);
        *pointer++;
        puts("");
    }
}
