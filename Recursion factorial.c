#include<stdio.h>


int main()
{
  int multiply(int n);
    int n;
       printf("Enter the number: ");
       scanf("\n %d",&n);

       printf("Factorial of %d = %d",n,multiply(n));
       return 0;


}
int multiply(int n)
{
    if(n>=1)
        return n*multiply(n-1);

        else
        return 1;
}
