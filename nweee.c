#include<stdio.h>

int main()

{
    int a=10,b=20;

    swap(a,b);

    printf("\n a= %d b= %d",a,b);

}
swap(int x,int y)
{
    int t;

    t=x;
    x=y;
    y=t;

    printf("\n x = %d y = %d",x,y);
}
