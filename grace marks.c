#include<stdio.h>

int main()

{
    int choice,a;
   {



    while(1)
    {
        printf("\n 1.class 2");
        printf("\n 2.class 3");
        printf("\n 3.class 4");
        printf("\n 4.Exit");
        scanf("\n %d",&choice );


    switch(choice)
       {
       case 1:
        {
            printf("Enter the number: ");
            scanf("\n%d",&a);
            if(a>3)
                printf("\n No Grace marks ");
             else
             printf("\n Grace marks +5");

             break;

        }
       case 2:
        {
            printf("Enter the number: ");
            scanf("%d",&a);
            if(a>2)
                printf("No Grace marks");
            else
                printf("Grace marks +5");
                break;
        }
       case 3:
           {
                  printf("Enter the number");
                  scanf("%d",&a);
                  if(a>1)
                    printf("NO Grace marks");
                  else
                     printf("Grace marks +5");
                     break;
           }
       default:
        printf("Wrong class");
       }
    }
   }
}












