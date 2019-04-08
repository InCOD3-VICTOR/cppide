#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<cmath>
using namespace std;

void dda(int x1,int y1,int x2,int y2) {
    float dx,dy,len,xi,yi,i=1;
    dx= x2-x1;
    dy= y2-y1;

    if(abs(dx)>=abs(dy))
        len=abs(dx);
    else
        len=abs(dy);

    xi=x1+0.5;
    yi=y1+0.5;
    putpixel(xi,yi,WHITE);
    dx=(dx)/len;
    dy=(dy)/len;

    while(i<=len) {
        xi=xi+dx;
        yi=yi+dy;
        putpixel(xi,yi,WHITE);
        i++;
    }
}

main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    dda(100,100,300,100);
    dda(100,100,200,300);
    dda(300,100,200,300);
    dda(100,270,200,50);
    dda(300,270,200,50);
    dda(100,270,300,270);
    getch();
    <!--graphic-screenshot-->
    closegraph();
}