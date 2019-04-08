#include<graphics.h>
 
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
 
   line(100, 100, 100, 200);
   line(70, 150, 100, 150);
   line(100, 125, 150, 90);
   line(100, 175, 150, 210);
   line(100, 175, 110, 200);
   line(100, 175, 125, 175);
 
   outtextxy(200, 150, "PNP Transistor");
 
   getch();
   closegraph();
}