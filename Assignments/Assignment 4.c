#include<stdio.h>
#define Size 5
void get_marks(int *marks ,  int size);
void total_marks(int *marks ,  int size );
void show_marks(int *marks ,  int size);
void avg_marks(int size);
int main()
{
        int array[Size];
        size_t i;
        int *ptr,total=0;
        ptr=array;
        get_marks(ptr,Size);
        show_marks(ptr,Size);
        total_marks(ptr,Size);

}
void get_marks(int *marks ,  int size)
{
    int i;
    printf("Enter 5 numbers :\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",marks+i);
        }


}
void total_marks(int *marks ,  int size )
{

    int i,total=0;


        for(i=0;i<size;i++)
        {
           total=total + *marks ;
           marks++;
        }
       printf("Your total marks are %d\n",total);


       avg_marks(total);


}
void show_marks(int *marks ,  int size)
{
    int i;
    printf("The numbers you entered are :\n");
        for(i=0;i<Size;i++)
            {
                printf("%d\n",*marks);
                marks++;
            }
}
void avg_marks(int size)
{
    int tot=0;
    tot=size/5;
    printf("Your average is %d\n",tot);


}
