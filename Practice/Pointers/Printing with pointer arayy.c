#include<stdio.h>
int main()
{
    int array[]={1,2,3,4};
    int *b=array;
    size_t i;

    printf("Printing through pointer-> array\n");
    for(i=0;i<4;i++)
    {
        printf("The %d element of array is =%d\n",i+1,b[i]);
    }
    puts("");

    printf("Printing through pointer-> \n");
    for(i=0;i<4;i++)
    {
        printf("The %d element of array is =%d\n",i+1,*b);
        b++;
    }
    puts("");

    //printf("Printing the selected value : \n");
    //printf("The %d element of array is =%d\n",i+1,*b);
        i=2;
   // printf("The %d element of array is =%d\n",i+1,b[i]);
}
