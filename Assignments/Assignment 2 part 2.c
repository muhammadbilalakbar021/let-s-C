#include<stdio.h>
int main()
{
    int array[5];
    size_t i;
    int j;
    printf("Enter the value btw 1 to 30\n");
    for(i=0;i<5;i++)
    {
        printf("Enter the value :\n");
        scanf("%d",&array[i]);
    }

    printf("%s%13s%13s\n","Array","Value","Histogram");
    for(i=0;i<5;++i)
    {
        printf("array[%d]%7d       ",i,array[i]);
        for(j=1;j<=array[i];++j)
        {
            printf("%c",'*');

        }
        puts("\n");

    }
}
