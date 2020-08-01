#include<stdio.h>
int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d",num);

    if(0==num%2){
        printf("Even number");
    }
    else if(num%2!=0){
        printf("Odd number");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
    
    
}