#include<stdio.h>

#define UPPERCASE(x) (x >='A' && x <= 'Z')
#define LOWERCASE(x) (x >='a' && x <= 'z')

int main()

{
   char alph;
   printf("Enter any character :");
   alph=getchar();

   if(UPPERCASE(alph))
   printf("'%c' U character :",alph);

   else if(LOWERCASE(alph))
   printf("'%c' L character :",alph);

   else
    printf("its not a character ",alph);





}
