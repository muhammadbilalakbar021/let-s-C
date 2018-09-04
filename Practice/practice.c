#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

#define SIZE 10

typedef struct atudents
{
    char name[20];
    int rollno;
    int *stno;

}stu;

int main()
{
    FILE *cfptr;
    if((cfptr=fopen("DataBase.dat","w"))==NULL)
    {
        printf("Error");
    }
    else
    {
    stu array[10];
    int *ptr;
    }



}
