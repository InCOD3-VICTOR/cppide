#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	int x, y, i;
	initgraph(&gdriver,&gmode,"");

    outtextxy(100, 100, "Press any key to continue...");
    getch();
    cleardevice();

	x = getmaxx() / 2;
	y = getmaxy() / 2;

	for (i=30; i<200; i++)
	{
		<!--graphic-screenshot-->
		setcolor(i/10);
		arc(x, y, 0, 180, i-10);
	}
    getch();
    closegraph();
    return 0;
}