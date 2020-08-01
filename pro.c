#include<stdio.h>

int main()

{
    int a,b,n;
    float sum=0;
    printf("Enter the value: ");
    scanf("%d",&a);

    for(b=1;b<=7;b++)
    {
        if(b==1)
            sum=sum+((a-1.0)/a);

        else
                sum=sum+(1.0/2.0)*pow(a-1.0/a,b);

    }
     printf("Sum of numbers is: %f\n",sum);

}


