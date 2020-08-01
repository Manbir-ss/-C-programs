#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,power;
    printf("Enter the base and Enter the power");
    scanf("\n %d%d",&n,&k);

    power= pow(n,k);
    printf("power of %d = %d",n,power);

}
