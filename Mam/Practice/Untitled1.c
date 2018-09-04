#include<stdio.h>
int main()
{
    int i, n, large,small, total;
    printf ("Enter total number of elements \n");
    scanf ("%d", &total);
    printf ("Enter first number \n");
    scanf ("%d", &n);
    large = n;
    small=n;
    for (i=1; i<= total-1  ; i++)
    {
        printf ("\n Enter another number \n");
        scanf ("%d",&n);
        if (n>large)
        large=n;
        if (n<small)
        small=n;
    }
    printf ("\n The largest number is %d", large);
    printf ("\n The smallest number is %d", small);
    return 0;
}
