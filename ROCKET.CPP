#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void rocket(int,int);
void crocket(int,int);
void obstacle(int,int);
void main()
{
 int gd=DETECT,gm=0,x=150,y=50,x1=590,y1=0;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 clrscr();
 setfillstyle(1,BLUE);
 floodfill(50,50,BLUE);
 while(1)
 {
 crocket(x,y);
 if(!kbhit())
 {
  y+=5;
 }
 else
 {
  getche();
  floodfill(x-10,y-10,BLUE);
  y-=5;

  }
  rocket(x,y);
  obstacle(x1,y1);
  delay(50);
  }
  getch();
  closegraph();
  }
  void rocket(int x,int y)
  {
   setcolor(YELLOW);
   line(x,y,x-30,y-15);
   line(x,y,x-30,y-15);
   line(x-30,y-15,x-30,y-15);
   line(x-30,y-15,x-100,y-15);
   line(x-30,y+15,x-100,y+15);
   line(x-100,y-25,x-100,y+25);
   line(x-100,y-25,x-80,y-15);
   line(x-100,y+25,x-80,y+15);
   line(x,y,x-30,y+15);
   line(x-30,y-15,x-30,y+15);
   setfillstyle(1,YELLOW);
   floodfill(x-10,y,YELLOW);
   setfillstyle(1,RED);
   floodfill(x-35,y,YELLOW);
   }
   void crocket(int x,int y)
   {
    setcolor(BLUE);
     line(x,y,x-30,y-15);
   line(x,y,x-30,y-15);
   line(x-30,y-15,x-30,y-15);
   line(x-30,y-15,x-100,y-15);
   line(x-30,y+15,x-100,y+15);
   line(x-100,y-25,x-100,y+25);
   line(x-100,y-25,x-80,y-15);
   line(x-100,y+25,x-80,y+15);
   line(x,y,x-30,y+15);
   setfillstyle(1,BLUE);
   floodfill(x-10,y,BLUE);
   setfillstyle(1,BLUE);
   floodfill(x-35,y,BLUE);
   }
   void obstacle(int x1,int y1)
   {
    setcolor(BLACK);
    line(x1,y1,x1+50,y1);
    line(x1+50,y1,x1+50,y1+70);
    line(x1+50,y1+70,x1,y1+70);
    line(x1,y1+70,x1,y1);
    setfillstyle(1,GREEN);
    floodfill(x1+10,y1+10,BLACK);
   }

