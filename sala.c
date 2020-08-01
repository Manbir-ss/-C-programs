#include<stdio.h>

int main()
{
    int salary,hr,varr;
    char id[10];

    printf("Enter id number: ");
    scanf("%s",&id);

    printf("Enter hours: ");
    scanf("%d",&hr);

    printf("salary per hour: ");
    scanf("%d",&salary);
    varr=hr*salary;

    printf("id: %s/n salary is: %d",id,varr);




}