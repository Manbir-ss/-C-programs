#include<stdio.h>

int main()

{
    int num;

    printf("Enter the number of prime");
    scanf("%d",&num);

    prime(num);

}
void prime(int j)
{
    int i=2;
     printf("prime factor of %d:",j);

    while(j!=0)
    {
        if(j%i==0)
        {
            printf("%d ",i);
        }
        else
        {
            i++;
            continue;
        }
        j=j/i;





    }

}
