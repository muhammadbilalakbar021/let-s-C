//26. Determine whether the “average” of two numbers is negative or not
 #include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("Enter number 1 : \n");
     scanf("%d",&a);
     printf("Enter number 2 : \n");
     scanf("%d",&b);
     c=(a+b)/2;
     if(c<0)
        printf("Average is negative %d",c);
        else
        printf("Average is non negative %d",c);
        return 0;
 }
