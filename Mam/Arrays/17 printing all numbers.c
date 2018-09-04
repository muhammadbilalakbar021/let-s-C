#include <stdio.h>

int main(){
    char str[20];

    printf("Enter a string: ");
    // inputs whole string
gets(str);
    printf("\nThe string you entered was %s",str);
    return 0;
}
