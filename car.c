#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

void main()
{

   int gd = DETECT, gm, midx, midy,i;
   initgraph(&gd,&gm,"c:\\Turboc3\\bgi");
   clrscr();
   midx = getmaxx()/2;    //FUNCTION TO FIND MAXIMUN X-COORDINATE
   midy = getmaxy()/2;    //FUNCTION TO FIND MAXIMUN Y-COORDINATE

   setcolor(CYAN);          //FUNCTION TO SET THE COLOUR
   settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);   //FUNCTION TO SET THE TEXT STYLE
   settextjustify(CENTER_TEXT, CENTER_TEXT); //FUNCTION TO DISPLAY TEXT IN CENTER
   outtextxy(midx, midy-10, "Traffic Light Simulation"); //DISPLAYS STRING ON SCREEN
   outtextxy(midx, midy+20, "Press any key to start");
   getch();
   cleardevice();
   setcolor(WHITE);

   /***SignalBox***/
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   rectangle(midx-30,midy-120,midx+30,midy+50);

   /***StopSign***/
   circle(midx, midy-80, 22);
   setfillstyle(SOLID_FILL,RED);
   floodfill(midx, midy-80,WHITE);
   setcolor(BLUE);
   outtextxy(midx,midy-80,"STOP");
 //  graphdefaults();   //RESETS ALL GRAPHICS SETTINGS
   setcolor(WHITE);
   line(50,370,90,370);
   arc(110,370,0,180,20);
   line(130,370,220,370);
   arc(240,370,0,180,20);
   line(260,370,300,370);
   line(300,370,300,350);
   line(300,350,240,330);
   line(240,330,200,300);
   line(200,300,110,300);
   line(110,300,80,330);
   line(80,330,50,340);
   line(50,340,50,370);

   /***CAR Windows***/
   line(165,305,165,330);
   line(165,330,230,330);
   line(230,330,195,305);
   line(195,305,165,305);

   line(160,305,160,330);
   line(160,330,95,330);
   line(95,330,120,305);
   line(120,305,160,305);

   /***Wheels***/
   circle(110,370,17);
   circle(240,370,17);

    /***Road***/
   line(0,390,639,390);
   delay(2000);
   cleardevice();
   setcolor(WHITE);

   /***ReadySign***/
   rectangle(midx-30,midy-120,midx+30,midy+50);
   circle(midx, midy-30, 20);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(midx, midy-30,WHITE);
   setcolor(BLUE);
   outtextxy(midx,midy-33,"READY");
   setcolor(WHITE);
   line(50,370,90,370);
   arc(110,370,0,180,20);
   line(130,370,220,370);
   arc(240,370,0,180,20);
   line(260,370,300,370);
   line(300,370,300,350);
   line(300,350,240,330);
   line(240,330,200,300);
   line(200,300,110,300);
   line(110,300,80,330);
   line(80,330,50,340);
   line(50,340,50,370);

   /***CAR Windows***/
   line(165,305,165,330);
   line(165,330,230,330);
   line(230,330,195,305);
   line(195,305,165,305);

   line(160,305,160,330);
   line(160,330,95,330);
   line(95,330,120,305);
   line(120,305,160,305);

   /***Wheels***/
   circle(110,370,17);
   circle(240,370,17);

    /***Road***/
   line(0,390,639,390);

   delay(2000);
   cleardevice();
   setcolor(WHITE);

   /***GoSign***/
   rectangle(midx-30,midy-120,midx+30,midy+50);
   circle(midx, midy+20, 22);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(midx, midy+20,WHITE);
   setcolor(BLUE);
   outtextxy(midx-7,midy+18,"GO");
   setcolor(WHITE);
   line(50,370,90,370);
   arc(110,370,0,180,20);
   line(130,370,220,370);
   arc(240,370,0,180,20);
   line(260,370,300,370);
   line(300,370,300,350);
   line(300,350,240,330);
   line(240,330,200,300);
   line(200,300,110,300);
   line(110,300,80,330);
   line(80,330,50,340);
   line(50,340,50,370);

   /***CAR Windows***/
   line(165,305,165,330);
   line(165,330,230,330);
   line(230,330,195,305);
   line(195,305,165,305);

   line(160,305,160,330);
   line(160,330,95,330);
   line(95,330,120,305);
   line(120,305,160,305);

   /***Wheels***/
   circle(110,370,17);
   circle(240,370,17);

    /***Road***/
   line(0,390,639,390);

   delay(1000);

   /*** --->Moving Car on Go Signal<-- ***/

   for (i=0;i<500;i++)
   {
   rectangle(midx-30,midy-120,midx+30,midy+50);
   circle(midx, midy+20, 22);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(midx, midy+20,WHITE);
   setcolor(BLUE);
   outtextxy(midx-7,midy+18,"GO");
   setcolor(WHITE);

   /***CAR BODY***/
   line(50+i,370,90+i,370);
   arc(110+i,370,0,180,20);
   line(130+i,370,220+i,370);
   arc(240+i,370,0,180,20);
   line(260+i,370,300+i,370);
   line(300+i,370,300+i,350);
   line(300+i,350,240+i,330);
   line(240+i,330,200+i,300);
   line(200+i,300,110+i,300);
   line(110+i,300,80+i,330);
   line(80+i,330,50+i,340);
   line(50+i,340,50+i,370);

   /***CAR Windows***/
   line(165+i,305,165+i,330);
   line(165+i,330,230+i,330);
   line(230+i,330,195+i,305);
   line(195+i,305,165+i,305);

   line(160+i,305,160+i,330);
   line(160+i,330,95+i,330);
   line(95+i,330,120+i,305);
   line(120+i,305,160+i,305);

   /***Wheels***/
   circle(110+i,370,17);
   circle(240+i,370,17);

    /***Road***/
   line(0,390,639,390);

   delay(10);
   cleardevice();
   }
 getch();

}




