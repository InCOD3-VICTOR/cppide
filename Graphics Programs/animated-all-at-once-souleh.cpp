#include<graphics.h>
#include<iostream>
using namespace std;

main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    outtextxy(100, 100, "Press any key to continue...");
    getch();
    cleardevice();

    for(int i = 0, j = 0; j <= 75 || i <= 50; i++, j++)    {
        if(i <= 50) {
            putpixel(100-i, 100, WHITE);
            putpixel(50, 100+i, WHITE);
            putpixel(50+i, 150, WHITE);
            putpixel(100, 150+i, WHITE);
            putpixel(100-i, 200, WHITE);
            putpixel(150+i, 125, WHITE);
            putpixel(200-i, 200, WHITE);
            putpixel(250+i, 200, WHITE);
            putpixel(350+i, 200, WHITE);
            putpixel(450+i, 200, WHITE);
            putpixel(450+i, 162, WHITE);
            putpixel(450+i, 125, WHITE);
            putpixel(550+i, 162, WHITE);
        }
        putpixel(150, 125+j, WHITE);
        putpixel(200, 200-j, WHITE);
        putpixel(250, 125+j, WHITE);
        putpixel(300, 200-j, WHITE);
        putpixel(350, 125+j, WHITE);
        putpixel(450, 125+j, WHITE);
        putpixel(550, 125+j, WHITE);
        putpixel(600, 200-j, WHITE);
        <!--graphic-screenshot-->
    }
    getch();
    closegraph();
}