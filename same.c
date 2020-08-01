#include<stdio.h>
int main()
{
    printf("%d",try(1,2));
    printf("\n%d",try(3,3));
}
int try(int x,int y)
{
     return x==y?(x+y)*3:x+y;
}
    

