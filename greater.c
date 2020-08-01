#include<stdio.h>

int main()

{
    int l,b,pr,ar;

    printf("Enter length and breadth");
    scanf("%d%d",&l,&b);

       ar=2*(l+b);

       pr=l*b;

       if(ar>pr)
        printf("Area is greater than perimeter");

        else
        printf("Area is smaller than perimeter ");

}

