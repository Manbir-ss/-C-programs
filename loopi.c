#include<stdio.h>

 int main()


{
    int a,b;



   printf("\nEnter any number");
   scanf("%d",&a);

   b=sqa(a);

   printf("%d\n",b);

}
int  sqa (int x)
{
    int y;
    y=(x*x);

    return y;
}






