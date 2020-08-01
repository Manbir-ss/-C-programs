
#include <stdio.h>

#define hello( n ) a##n

int a3;

int main()

{

int x;

    x=hello(3);

if(x!=0)

printf("hi");

else

printf("good");

}

