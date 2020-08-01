#include<stdio.h>
#define UPPER(x) ((x >= 'A') && (x <= 'Z'))
#define LOWER(x) ((x > 'a') && (x < 'z'))
int main()

{
    char a;

    printf("Enter the character");
    a=getchar();

    if (UPPER(a))
        printf("Its A Upper CASE Letter = %c");
    else if(LOWER(a))
        printf("Its A LOWER CASE Letter = %c");
    else
        printf("Its Not A Letter");
}
