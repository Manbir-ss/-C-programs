#include<stdio.h>

int main()

{
    int year;

    printf("Enter The year: ");
    scanf("%d",&year);

    if(year%400==0)
        {
       printf("its a leap year");
    }

    else if(year%100==0)
        {
        printf("its not a leap year");
    }

    else if(year%4==0)
        {
       printf("its a leap year");
    }


        else
            {
            printf("its not a leap year");
        }

}
