#include<stdio.h>
#include<conio.h>
int main()
 {
        int radius;
        float PI=3.142,circum,area;
        char choice;

        printf("1. Area\n");
        printf("2. Circumference\n");
        printf("Enter your choice : \n");
        scanf("%c",&choice);


        switch(choice)
    {

              case '1' : printf("Enter the radius");
              scanf("%d",&radius);
                 area=PI*radius*radius;

                 printf("Area of circle is %f",area);
                 break;

                 case '2' : printf("Enter the radius");
                 scanf("%d",&radius);
                 circum=PI*2*radius;

                 printf("circumference of circle is %f",circum);
                 break;
                 default : printf("wrong choice");
        break;
}
getch();
return 0;
  }
