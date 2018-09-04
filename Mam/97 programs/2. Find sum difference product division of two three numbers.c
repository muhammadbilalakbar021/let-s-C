#include<stdio.h>
int main(){
    int input,ch,n1,n2,n3,addition,subtraction,multiplication,division;
    char swtch;
    printf("For 2 numbers type 2\n");
    printf("For 3 numbers type 3\n ");

    scanf("%d",&ch);
    if(ch==2)
    {
    printf("Enter + for addition\n");
    printf("Enter - for subtraction\n");
    printf("Enter * for multiplication\n");
    printf("Enter / for dividion\n");
    scanf("%ch",&swtch);
    getchar();
    switch(swtch)
    {
    case'+':
    printf("Enter first number for addition\n");
    printf("Enter second number for addition\n");
    scanf("%d%d",&n1,&n2);
    addition=n1+n2;
    printf("your addition is%d",addition);
    break;


    case'-':
    printf("Enter first number for subtraction\n");
    printf("Enter second number for subtraction\n");
    scanf("%d%d",&n1,&n2);
    subtraction=n1-n2;
    printf("your subtraction is%d",subtraction);
    break;

    case'*':
    printf("Enter first number for multiplication\n");
    printf("Enter second number for multiplication\n");
    scanf("%d%d",&n1,&n2);
    multiplication=n1*n2;
    printf("your multiplication is%d",multiplication);
    break;

    case'/':
    printf("Enter first number for division\n");
    printf("Enter second number for division\n");
    scanf("%d%d",&n1,&n2);
    division=n1/n2;
    printf("your division is%d",division);
    break;
    default:
        printf("none");
    }
    }
    else if (ch==3)
    {
    printf("Enter + for addition\n");
    printf("Enter - for subtraction\n");
    printf("Enter * for multiplication\n");
    printf("Enter / for dividion\n");
    scanf("%ch",&swtch);
    switch(swtch)
    {
    case'+':
    printf("Enter first number for addition\n");
    printf("Enter second number for addition\n");
    printf("Enter third number for addition\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    addition=n1+n2,n3;
    printf("your addition is%d",addition);
    break;


    case'-':
    printf("Enter first number for subtraction\n");
    printf("Enter second number for subtraction\n");
    printf("Enter third number for subtraction\n");

    scanf("%d%d%d",&n1,&n2,&n3);
    subtraction=n1-n2-n3;
    printf("your subtraction is%d",subtraction);
    break;

    case'*':
    printf("Enter first number for multiplication\n");
    printf("Enter second number for multiplication\n");
    printf("Enter third number for multiplication\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    multiplication=n1*n2*n3;
    printf("your multiplication is%d",multiplication);
    break;

    case'/':
    printf("Enter first number for division\n");
    printf("Enter second number for division\n");
    printf("Enter third number for division\n");

    scanf("%d%d%d",&n1,&n2,&n3);
    division=n1/n2/n3;
    printf("your division is%d",division);
    break;

    default:
        printf("none");
    }
    }
    return 0;
    }
