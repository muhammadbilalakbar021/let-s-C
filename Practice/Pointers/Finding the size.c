#include<stdio.h>
int main()
{
    printf("size of Character is %u\n",sizeof(char));
    printf("size of Integer is  is %u\n",sizeof(int));
    printf("size of short is %u\n",sizeof(short));
    printf("size of float is %u\n",sizeof(float));
    printf("size of long is %u\n",sizeof(long));
    printf("size of long long is %u\n",sizeof(long long));
    printf("size of double is %u\n",sizeof(double));

    int a[20];
    printf("size of array is %u\n",sizeof a);
    int *ptr;
    float *f;
    char *c;
    printf("size of int pointer is %u\n",sizeof ptr);
    printf("size of float pointer is %u\n",sizeof f);
    printf("size of char pointer is %u\n",sizeof c);
}
