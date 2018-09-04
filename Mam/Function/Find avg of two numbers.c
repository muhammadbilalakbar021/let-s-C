#include<stdio.h>
float avg(float , float);

int main()
{
    float a,b,average;
    printf("Enter two numbers \n");
    scanf("%f%f",&a,&b);
    average=avg(a,b);
    printf("AVerage = %f",average);
    return 0;
}
float avg(float a , float b)
{
    return (a+b)/2.0;

}


