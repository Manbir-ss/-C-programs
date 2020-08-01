#include<stdio.h>

int main()

{
    int i,j,k;

    printf("Enter the three angles of triangles");
    scanf("%d%d%d",&i,&j,&k);

    if(i+j+k==180)
        printf("its a valid triangle");
    else
        printf("its not a valid triangle");;
        return 0;
}
