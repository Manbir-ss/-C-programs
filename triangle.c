#include<stdio.h>

int main()

{
    int o,p,l;

    printf("Enter The Values of Angles");
    scanf("%d%d%d",&o,&p,&l);

    if(180==o+p+l)
        printf("Yes its a Triangle");
    else
    printf("its not a trangle");

    return 0;
}
