#include<stdio.h>

int main()
{
    int ror[20],i;

    printf("Input 20 numbers:- \n");
    for ( i = 0; i < 20; i++)
    {
        printf("Enter %d number: ",i);
        scanf("%d",&ror[i]);
    }
     printf("Numbers are:");
    for ( i = 0; i < 20; i++)
    {
        printf(" %d",ror[i]);
    }

    
    
    
}