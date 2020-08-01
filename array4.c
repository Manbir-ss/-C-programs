#include<stdio.h>

int main()
{
    int i[100],a,n,sum;

    for ( a = 0; a<=5; a++)
    {
        printf("Enter %d number-:",a);
        scanf("%d",&i[a]);
    }

    for ( a = 0; a < 5; a++)
    {
        sum+= i[a];
    }

    printf("Sum of number is %d",sum);
    
    
}