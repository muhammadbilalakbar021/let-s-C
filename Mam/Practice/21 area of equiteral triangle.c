#include<stdio.h>
main()
     {
        float area,root,side;
                root  = sqrt(3)/4;

        printf("Enter the side\n");
        scanf("%f",&side);
        area=root*(side*side);
        printf("Your result=%f",area);
        return 0 ;
    }
