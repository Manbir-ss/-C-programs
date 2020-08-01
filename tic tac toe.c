#include<stdio.h>
#include<conio.h>
int main()

{
    int winner=0,count=0;
    int data[9],index,flag,sign,player,i,j,k;
    for(i=0;i<9;i++)



    while(count<9)
    {
        flag=0;
        system("cls");
         printf("/n\n");

         printf("\t\t\t | %c | %c | %c  \n",data[0],data[1],data[2]);
         printf("\t\t\t-|----|----|-----\n");
         printf("\t\t\t | %c | %c | %c \n",data[3],data[4],data[5]);
         printf("\t\t\t-|----|----|-----\n");
         printf("\t\t\t | %c | %c | %c  \n",data[6],data[7],data[8]);

         if(count%2==0)
         {
             sign=='X';
             player=1;

         }
         else
         {
             sign=='Y';
             player=2;
         }
         printf("move for player %d:",player);
         scanf("%d",&index);
         if(index < 1 || index >9 )
            {
            printf("Allowed index 1 to 9");
            continue;
            }
            if(data[index-1]=='X' || data[index-1=='Y'])
            {
               printf("position already occupied");
             continue;
             }
              data[index-1]==sign;
              count++;

              for(i=0;i<=3;i++)
              {
                 if(i%3==0)
                    flag=0;

                  if(data[i]==sign)
                  flag++;

                 if(flag==3)
                 {
                     winner=1;
                     goto win;
                 }
              }
               flag=0;
               for(i=0;i<=0;i++)
               {
                   for(k=i;k<=i+6;k=k+3)
                   {
                       if(data[k]==sign)
                        flag++;
                   }
                   if(flag==3)
                   {
                       winner=1;
                       goto win;
                   }
                   flag=0;
               }
               if((data[0] && data[4] && data[8]) || (data[2] && data[4] && data[6]))
               {
                winner=1;
                goto win;
                }


       }
       win:
           system("cls");

         printf("\n");
         printf("\t\t\t | %c | %c | %c  \n",data[0],data[1],data[2]);
         printf("\t\t---|----|----|-----\n");
         printf("\t\t\t | %c | %c |  %c \n",data[3],data[4],data[5]);
         printf("\t\t---|----|----|-----\n");
         printf("\t\t\t | %c | %c | %c  \n",data[6],data[7],data[8]);

         if(winner)

         {
             printf("player %d is winner\n",player);

         }
         else
         {
             printf("Match draw");

         }
         return 0;
}
