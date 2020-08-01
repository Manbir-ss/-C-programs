#include<stdio.h>

int main()

{
    int a;

    printf("Enter The value: ");
    scanf("%d",&a);

    if(0==a%2)
        printf("Even");
      else
        printf("Odd");
}

