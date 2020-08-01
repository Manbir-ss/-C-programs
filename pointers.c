#include<stdio.h>

int main()

{
    int rt=5;

    printf("\n Address of rt = %u",&rt);
    printf("\n Value of rt = %d",rt);
    printf("\n Value of rt = %d",*(&rt));
}
