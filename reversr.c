#include<stdio.h>

int main()

{
    int n,rev=0,re,r;

    printf("Enter the number: ");
    scanf("%d",&n);

       re=n;
       while(n!=0)
       {
           r=n%10;
           rev=rev*10+r;
           n=n/10;
       }
       if(re==rev)
        printf("Entered is Palindrome");

        else
        printf("Entered is not palindrome");


}
