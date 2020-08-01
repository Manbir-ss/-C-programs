#include<stdio.h>

int main()

{
    int a,b,fact;

    printf("\nEnter the number: ");
    scanf("%d",&a);

    fact=factorial(a);

    printf("The value of factorial: %d",fact);
}
factorial(int x)
{
    int f;

    if
        (x==1)
          return 1;
     else
          f=x*factorial(x-1);
             return f;
}
