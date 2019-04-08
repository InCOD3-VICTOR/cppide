#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x = 250, y = 200;
    int start_angle = 0;
    int end_angle = 360;
    int x_rad = 100;
    int y_rad = 50;
    initgraph(&gd, &gm, "");

    ellipse(x, y, start_angle, end_angle, x_rad, y_rad);

    getch();
    closegraph();
    return 0;
}