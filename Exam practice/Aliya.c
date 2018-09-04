
#include<stdio.h>

int main()
{
    int marks[5];
    size_t a;
    int sum=0;
    float avg;

    printf("Enter 5 values");
    for(a=0;a<5;++a)
    {
        scanf("%d",&marks[a]);

    }
    for(a=0;a<5;++a)
    {
        sum += marks[a];

    }



    avg=sum/5;

    printf("Your average is =%.4f",avg);
    return 0;
}
