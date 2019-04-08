#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int left, top, right, bottom;

    bar(left = 150, top = 150, right = 190, bottom = 350);

    bar(left = 220, top = 250, right = 260, bottom = 350);

    bar(left = 290, top = 200, right = 330, bottom = 350);

    line(100, 50, 100, 350);

    line(100, 350, 400, 350);

    getch();
    closegraph();
    return 0;
}