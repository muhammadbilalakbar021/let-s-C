#include<stdio.h>
int main()
{
        int number;
        printf("Enter the number u want to check [Even/Odd]");
        scanf("%d",&number);

            if( number %2 == 0)
            printf("%d number is even",number);
            else
            printf("%d number is odd");
}
