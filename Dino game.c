#include <stdio.h>
#include <conio.h>

#include <time.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X=x;
    coordinate.Y=y;


}
void delay(unsigned int msecond)
{
    clock_t goal = msecond + clock();
    while (goal>clock());

}
void getup()
{
    system("clearscreen");
    gotoxy(10,2);
    printf("Press x to exit & press space to jump");
    gotoxy(62,2);
    printf("SCORE: ");
    gotoxy(1,25);
    for(int x=0;x<=79;x++)
        printf("#");
}
int t,speed=40;
int jump==0;
{
    static int a=1;
    if(jump==0)
        t=0;
        else if(jump==2)
            t--;

      else t++;
  gotoxy(2,15-t);
  printf("     ");
  gotoxy(2,16-t);
  printf("          ######### ");
  gotoxy(2,17-t);
  printf("       ##############");
  gotoxy(2,18);
  printf("               #####");
  gotoxy(2,19-t);
  printf("######### ##########");
  gotoxy(2,20-t);
  printf("       ##     ######");
  gotoxy(2,21-t);
  printf("###                 ");
  gotoxy(2,22);
  printf("  ##########        ");
  gotoxy(2,23);
  if(jump==1 || jump==2){
    printf("   #####       ###");
    gotoxy(2,24-t);
    printf("  #### ###########");
     }
  else if(a==1)
      {
      printf("  #######  ######");
      gotoxy(2,24-t);
      printf("       #####     ");
      a=2;
      }
    else if(a==2)
    {
        printf("   ####       ");
        gotoxy(2,24-t);
        printf("    ##        ");
        a=1;
    }
  gotoxy(2,25-t);
  if(jump!=0)
    {
    printf("                 ");
    }
   else
     {
         printf("#############");
     }
delay(speed);

}

void obj()
{
    static int x=0, scr=0;
    if(x==56 && t<4)
    {
        scr=0;
        speed=40;
        gotoxy(36,8);
        printf("game over");
        getch();
        gotoxy(36,8);
        printf("            ");

    }
    gotoxy(76-x,20);
    printf("#     #");
    gotoxy(74-x,21);
    printf("#     #");
    gotoxy(74-x,22);
    printf("  #   ");
    x++;
    if(x==73)
    {
        x=0;
        scr++;
        gotoxy(70,2);
        printf("      ");
        gotoxy(70,2);
        printf("%d",scr);
        if(speed>20)
            speed--;
        }
}
int main()
{
    system("mode con: lines=29 cols=82");
    char ch;
    int i;
    getup();
    while(free)
    {
        while(!kbhit())
        {

            obj();
        }
        ch=getch();
        if(ch==' ')
        {
            for(i=0;i<10;i++)
            {
                ds(1);
                obj();

            }
            for(i=0;i<10;i++)
            {
                ds(2);
                obj();

            }
        }
        else if(ch=='x')
            return 0;
    }
}


































