#include<graphics.h>
using namespace std;

void midPoint(int X1, int Y1, int X2, int Y2)
{
    int dx = X2 - X1;
    int dy = Y2 - Y1;

    int d = dy - (dx/2);
    int x = X1, y = Y1;

    putpixel(x, y, WHITE);

    while (x < X2)
    {
        x++;
        if (d < 0)
            d = d + dy;
        else
        {
            d += (dy - dx);
            y++;
        }
        putpixel(x, y, WHITE);
        delay(30);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");

    int X1 = 20, Y1 = 20, X2 = 250, Y2 = 250;
    midPoint(X1, Y1, X2, Y2);

    getch();
    closegraph();
    return 0;
}