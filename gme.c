#include<stdio.h>

int main()

{
    int your;

    while(1)
    {
        printf("\n 1.Factorial");
        printf("\n 2.Prime");
        printf("\n 3.Odd/Even");
        printf("\n 4.Exit");
        printf("\n Your Choice");
        scanf("%d",&your);
    }
    switch(your)
    case 1:
        printf("You choose Factorial: ");

    case 2:
        printf("You choose Prime: ");

    case 3:
        printf("You choose Odd/Even");

    case 4:
        printf("You choose Exit");


}
