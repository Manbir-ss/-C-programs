#include<stdio.h>

int main()

{
    int i,n,sum=0,marks[10],avg;

    printf("Enter the size");

    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("\nEnter the numbers: ");
        scanf("%d",&marks[i]);

        sum = sum+marks[i];
    }
    avg=sum/n;
printf("Average=%d",avg);

}
