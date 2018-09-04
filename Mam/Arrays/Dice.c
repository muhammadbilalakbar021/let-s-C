#include<stdio.h>
#include<stdlib.h>
#define size 7
int main()
{
    int dice[size]={0};
    size_t face;
    int roll;


    for(roll=1;roll<1000;++roll)
        {
            face=1+rand()%6;
            ++dice[face];
        }
    printf("%s%17s\n","Face","Rolls");
    for(face=1;face<size;++face)

        printf("%d%17d\n",face,dice[face]);

    return 0;


}
