#include<stdio.h>

int main()

{
    int j,i,count;
    float k,si;

    while(count<=3)
    {
        printf("Enter Th Value of i j k: \n");
        scanf("%d%d%f",&i,&j,&k);

        si=i*j*k/100;
        printf("Salary is =2%f\n",si);
        count=count+1;
    }

}
