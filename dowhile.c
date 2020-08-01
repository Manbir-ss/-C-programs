#include<stdio.h>

int main()
{
    int bro,pro=0;
    printf("Enter the number");
    scanf("%d",&bro);

    do{
        printf("%d",pro+1);
       pro=pro+1;
    }while(bro<pro);
}
