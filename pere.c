#include<stdio.h>

int main()

{
    int per;

    printf("Enter the percentage\n: ");
    scanf("%d",&per);

    if(per>=60)
        printf("First division");
    if((per>=50)&&(per<60))
        printf("Second division");
    if((per>=40)&&(per<50))
        printf("Third division");
    if(per<40)
        printf("Fail");
    return 0;
}
