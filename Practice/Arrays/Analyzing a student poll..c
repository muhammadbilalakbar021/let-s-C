#include<stdio.h>
#define responce 10
#define freq 5

int main()
{
    int students[responce]={1,1,1,3,3,3,2,2,4,4};
    size_t i;
    int frequency[freq]={0};

    for(i=0;i<=responce;i++)
    {
        ++frequency[students[i]];
    }

    printf("%s%13s\n","students","responnce");
    for(i=0;i<5;i++)
    {
        printf("array[%d]%13d\n",i,frequency[i]);
    }
}
