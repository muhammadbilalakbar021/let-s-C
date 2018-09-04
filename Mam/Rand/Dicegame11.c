#include<stdio.h>
#include<stdlib.h>
int main()
{
     unsigned int frequency[7]={0};
     unsigned int roll;
     int face,i;

     for(roll=1;roll<=1000;roll++)
     {
         face=1+rand()%6;
         ++frequency[face];
     }
            printf( "%s%13s\n", "Face", "Frequency" );
            for(i=1;i<=6;i++)
            printf("%d%13u\n",i,frequency[i]);
                        return 0;

}
