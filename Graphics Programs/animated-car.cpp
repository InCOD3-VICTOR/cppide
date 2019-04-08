#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
using namespace std;

main()  {
    int gm=DETECT,gd,i;
    initgraph(&gm,&gd,"");

    int midx = getmaxx()/2;
    int midy = getmaxy()/2;

    setcolor(WHITE);
    settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, midy+30, "Press any key to start");
    getch();
    cleardevice();

    for(i=0;i<=500;i++)    {
        // Road
        line(0,322,700,322);

        // Car Body
        line(0+i,300,13+i,298);
        line(13+i,298,30+i,280);
        line(30+i,280,80+i,280);
        line(80+i,280,97+i,298);
        line(97+i,298,120+i,300);
        line(0+i,300,0+i,315);
        line(0+i,315,25+i,315);
        arc(35+i,315,0,180,9);
        line(45+i,315,67+i,315);
        arc(77+i,315,0,180,9);
        line(85+i,315,120+i,315);
        line(120+i,300,120+i,315);

        // First Window
        line(32+i,285,50+i,285);
        line(50+i,285,50+i,295);
        line(50+i,295,23+i,295);
        line(32+i,285,23+i,295);

        // Second Window
        line(60+i,285,78+i,285);
        line(60+i,285,60+i,295);
        line(60+i,295,85+i,295);
        line(78+i,285,85+i,295);

        // Wheels
        circle(35+i,315,6);
        circle(77+i,315,6);

        delay(30);
        <!--graphic-screenshot-->
        cleardevice();
    }
    getch();
    closegraph();
}