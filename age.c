#include<stdio.h>

int main()

{
    int Ram,Shyam,Ajay;

    printf("Enter the age of three person");
    scanf("%d%d%d",&Ram,&Shyam,&Ajay);

    if(Ram<Shyam && Ram<Ajay)
    {
        printf("Ram is Younger");
    }
    else if(Shyam<Ram && Shyam<Ajay)
    {
        printf("Shyam is Younger");

    }
    else
    {
        printf("Ajay is Younger");
    }

}
