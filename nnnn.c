#include<stdio.h>
int main()
{
    printf("Absolute difference: %d",try(45,51));
    printf("\nAbsolute difference: %d",try(58,51));
    printf("\nAbsolute difference: %d",try(51,51));
}
int try(int x,int y)
{
    return x>y?(x-y)*3:x-y;
}