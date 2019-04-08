#include<graphics.h>

int abs (int n) 
{
    return ( (n>0) ? n : ( n * (-1)));
}

void DDA(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,WHITE);
        X += Xinc;
        Y += Yinc;
        delay(30);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");

    int X0 = 20, Y0 = 20, X1 = 250, Y1 = 250;
    DDA(X0, Y0, X1, Y1);

    X0 = 250, Y0 = 20, X1 = 20, Y1 = 250;
    DDA(X0, Y0, X1, Y1);

    getch();
    closegraph();
    return 0;
}