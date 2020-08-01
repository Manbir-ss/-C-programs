#include<stdio.h>

int main()

{
    int a,b,ans;

    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            ans=a*b;

            printf("%dx%d=%d\n",a,b,ans);
        }
    }
}
