#include<stdio.h>
#include<stdio.h>
int fib(int);
void main()

{
    int n,i,f;

    printf("Enter the number of terms");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        f=fib(i);
        printf(" %d ",f);


    }
}
int fib(int n)

{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
     else
        return fib(n-1)+fib(n-2);
}


