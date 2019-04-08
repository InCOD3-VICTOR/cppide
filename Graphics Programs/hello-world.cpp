#include<graphics.h>
 
int main(void) {
   int gdriver = DETECT, gmode;
   int x = 130, y = 150;
   initgraph(&gdriver, &gmode, "");
 
   settextstyle(9, 0, 5); 
   outtextxy(x, y, "Hello World");
   getch();
   closegraph();
   return 0;
}