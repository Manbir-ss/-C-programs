#include<stdio.h>

int main()

{
    int a,b,fact;

    printf("\nEnter the factorial: ");
    scanf("\n %d",&a);

   fact=factorial(a);

    printf("The factorial is = %d ",fact);
}

factorial(int x)
{
    int f=1,i;

    for(i=x;i>=1;i--)
        f=f*i;

        return f;
}
