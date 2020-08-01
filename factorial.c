#include<stdio.h>

int main()

{
    int i,num,j=i;
      float f=1;

    printf("Enter the number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)

        f=f*i;
   return(f);
}
