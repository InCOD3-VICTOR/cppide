#include<graphics.h>

int main()
{
    int gd = DETECT, gm, midx, midy;
    initgraph(&gd, &gm, "");

    midx = getmaxx()/2;
    midy = getmaxy()/2;

    setcolor(WHITE);
    settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, midy-10, "Traffic Light Simulation");
    outtextxy(midx, midy+30, "Press any key to start");
    getch();
    <!--graphic-screenshot-->
    
    cleardevice();
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    rectangle(midx-30,midy-80,midx+30,midy+80);
    circle(midx, midy-50, 22);
    setfillstyle(SOLID_FILL,RED);
    floodfill(midx, midy-50,WHITE);
    setcolor(BLUE);
    outtextxy(midx,midy-50,"STOP");
    getch();
    <!--graphic-screenshot-->

    graphdefaults();
    cleardevice();
    setcolor(WHITE);
    rectangle(midx-30,midy-80,midx+30,midy+80);
    circle(midx, midy, 20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(midx, midy,WHITE);
    setcolor(BLUE);
    outtextxy(midx-18,midy-3,"READY");
    getch();
    <!--graphic-screenshot-->

    cleardevice();
    setcolor(WHITE);
    rectangle(midx-30,midy-80,midx+30,midy+80);
    circle(midx, midy+50, 22);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(midx, midy+50,WHITE);
    setcolor(BLUE);
    outtextxy(midx-7,midy+48,"GO");
    setcolor(WHITE);
    settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);
    outtextxy(midx-150, midy+100, "Press any key to exit...");
    getch();
    <!--graphic-screenshot-->
    
    closegraph();
    return 0;
}