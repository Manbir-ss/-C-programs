#include<stdio.h>

int main()


{
    int sl,hra,da,ga;


    printf("Enter The Basic salary: ");
    scanf("%f",&sl);

    if(sl<1500)
    {
    hra=sl*10/100;
    da=sl*90/100;
    }
    else
    {
     hra=sl*500;
     da=sl*98/100;
    }
    ga=sl+hra+da;
    printf("Gross salary = Rs. 2%f",ga);

}




