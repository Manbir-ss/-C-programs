#include<stdio.h>

int main()

{
    int table,i;

    printf("Enter the number for table :");
    scanf("%d",&table);

    for(i=1;i<=10;i++)

        printf("%d*%d=%d\n",table,i,table*i);

}
