#include<stdio.h>

int main()

{
    int num,j;
    float fact,sum=0;

    for(num=1;num<=9;num++)
    {
        fact=1;
        for(j=num;j>=1;j--)
            fact=fact*num;
        sum=sum+num/fact;

    }
    printf("sum of first nine numbers: %.2f ",sum);
}
