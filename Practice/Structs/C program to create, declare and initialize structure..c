#include<stdio.h>
struct a{
            char c[30];
            int a;
            float b;
};
int main()
{
    struct a new={"Bilal" ,2,35.3};
    printf("My name is %s\n",new.c);
    printf("My roll number is %d\n",new.a);
    printf("My salary  %f",new.b);

}
