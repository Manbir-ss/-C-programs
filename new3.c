#include<stdio.h>

int main()
{
    float cm,meter,km;

     printf("Enter the length in cm");
     scanf("%f",&cm);

     meter = cm/100;
     km = cm/1000;

     printf("%f m", meter);
     printf("%f km", km);

}




