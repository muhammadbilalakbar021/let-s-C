#include<stdio.h>
#include<stdlib.h>

int main()
{
    int faces[7]={0};
    int roll;
    size_t frequency;

    for(roll=0;roll<1000;roll++)
    {
        frequency=1+rand()%6;
        ++faces[frequency];
    }
     printf( "%s%17s\n", "Face", "Frequency" );

    for(frequency=1;frequency<=6;++frequency)
    {
        printf("%7u%13d\n",frequency,faces[frequency]);
    }
}
