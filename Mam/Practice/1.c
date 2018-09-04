#include<stdio.h>
int main(){   
        int a,b,rev = 0;
        printf("\nEnter any no to be reversed : ");
        scanf("%d", &num);  
        while (a >= 1) {
        b= a % 10;   
        rev= rev * 10 + rem;
       num= num / 10;   
        }  
          printf("\nReversed Number : %d", rev);   
        return (0);
        }
