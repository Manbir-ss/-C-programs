#include<stdio.h>

int main()
{
    int a,number[7],total=0;
    printf("Enter first number:" );
    scanf("%d",&number[1]);
    printf("Enter second number:" );
    scanf("%d",&number[2]);
    printf("Enter third number:" );
    scanf("%d",&number[3]);
    printf("Enter fourth number:" );
    scanf("%d",&number[4]);
    printf("Enter fifth number:" );
    scanf("%d",&number[5]);
    printf("Enter sixsth number:" );
    scanf("%d",&number[6]);
    printf("Enter seventhnumber:" );
    scanf("%d",&number[7]);

    for(a=0;a<7;a++){
        if((number[a]%2)==0){
            total+=number[a];
        }
    }
     printf("Sum of odd numbers: %d ",total);
}