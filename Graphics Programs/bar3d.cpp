#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int left, top, right, bottom, depth, topflag;
    
    bar3d(left = 150, top = 250, right = 190, bottom = 350, depth = 20, topflag = 1);
    
    bar3d(left = 220, top = 150, right = 260, bottom = 350, depth = 20, topflag = 0);
    
    bar3d(left = 290, top = 200, right = 330, bottom = 350, depth = 20, topflag = 1);
    
    line(100, 50, 100, 350);
    
    line(100, 350, 400, 350);
    
    getch();
    closegraph();
    return 0;
}