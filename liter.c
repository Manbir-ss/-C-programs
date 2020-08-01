#include<stdio.h>

int main()
{
    int liter,km;
    float Avg;

    printf("Enter total distance: ");
    scanf("%d",&km);

    printf("Enter liter: ");
    scanf("%d",&liter);
      
    Avg=km/liter;

    printf("Average consumption: %.3f",Avg);
    
}