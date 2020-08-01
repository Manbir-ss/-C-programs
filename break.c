#include<stdio.h>

int main()

{
    int i,meme;
    printf("Enter A Number: ");
    scanf("%d",&meme);


    while(i=meme-1)
    {
        if(meme%i==0)
        {


            printf("Not a prime number");
            break;
        }
    }
    i++;
}
