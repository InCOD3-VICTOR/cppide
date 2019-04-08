#include<graphics.h>
 
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
 
   line(100, 100, 100, 200);
   line(70, 150, 100, 150);
   line(100, 125, 150, 90);
   line(100, 175, 150, 210);
   line(140, 190, 150, 210);
   line(130, 210, 150, 210);
 
   outtextxy(100, 250, "NPN Transistor");
 
   getch();
   closegraph();
}