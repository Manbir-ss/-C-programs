#include<stdio.h>

int main()

{
    int k=5;
    int *y;

    y=&k;

    printf("The value in address: %u",y);
    printf("\n the value in store : %d",*y);
}
