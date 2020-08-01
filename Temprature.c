#include<stdio.h>

int main()

{
    int celcius,farnhiet;

    printf("Enter temprarure");
    scanf("%f",&celcius);

    farnhiet = (celcius*9/5) + 32;

    printf("%.2f celcius = %.2f Farnhiet", farnhiet , celcius);


}
