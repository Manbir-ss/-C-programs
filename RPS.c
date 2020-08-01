#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int start();
int menu();
void setup();
void splayer();
void mplayer();
void slogic();
void mlogic();
char p1[50],p2[50];
int player1,player2,computer;
int main()
{
    while(1)
    {
        setup();
    }
}
int start()
{
    int mj;
    printf("\n\n\t Friend");
    printf("\n\t computer");
    printf("\n\t Exit");
    printf("Choose with whom you want to play");
    scanf("%d",&mj);
}
int menu()
{
    int ch;
    printf("\tRock\n");
    printf("\tscissor\n");
    printf("\tpaper\n");
    scanf("%d",&ch);

}
void setup()
{
    switch(start())
    {
        case 1:
        system("clear");
        mplayer();
        mlogic();
        break;

        case 2:
        system("clear");
        name();
        splayer();
        slogic();
        break;

        case 3:
        exit(0);
        default:
        printf("\n\tINVALID CHOICE");

    }
}
void mplayer()
{
    printf("\n\tEnter Player 1 name: ");
    while (getchar()!='n');
    scanf("%s",&p1);
    player1 = menu();
    system("clear");
    printf("\n\tPlayer 2: ");
    while(getchar!='n')
    scanf("%s",&p2);
    player2=menu();

}
void splayer()
{
    label:
    computer=rand()%4;
    if(computer==0)
       goto label;
    player1=menu();
}
void name()
{
    printf("\n\tEnter player name");
    while(getchar()!='n');
    scanf("%s",&p1);

}
void slogic()
{
    switch (player1)
    {
      case 1:
      if(computer==1)
          printf("\n\n\t\tGame Draw: ");
      else if(computer==2)
          printf("\n\n\tComputer Win :");
      else if(computer==3);
          printf("\n\n\t\t%s Win :");
      break;

      case 2:
        if(computer==1)
            printf("/n/n/t%s Win: ");
        else if(computer==2)
            printf("\n\n\tGame Draw: ");
        else if(computer==3)
            printf("\n\n\t\tCompute Win: ");
            break;
      case 3:
          if(computer==1)
             printf("\n\n\tComputer Win: ");
        else if(computer==2)
            printf("\n\n\t&s Win: ");
        else if(computer==3)
            printf("\n\n\t\tGAme Draw: ");
            break;
    }
}
void mlogic()
    {
        switch (player1)
        {
            case 1:
         if(player2==1)
                printf("\n\n\t\tGame Draw: ");
          else if(player2==2)
                    printf("\n\n\t%s Win: ",p2);
          else if(player2==3)
            printf("\n\n\t%s Win",p1);
            break;
            case 2:
                if(player2==1)
                  printf("\n\n\t%s Win ",p1);
                  else if(player2==2)
                        printf("\n\n\t\tGame Draw: ");
                        else if (player2==3)
                        printf("\n\n\t%s Win ",p2);
                  break;
        }
}
