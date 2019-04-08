#include<graphics.h>
#include<conio.h>
#include<dos.h>

// Wings
void handDown(int i)    {
    line(85+i,155,45+i,185);
    line(85+i,155,115+i,195);
    arc(90+i,130,228,292,70);
}

void handUp(int i)  {
    line(85+i,155,125+i,115);
    line(85+i,155,55+i,118);
    arc(90+i,177,60,122,70);
}

main()  {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int i=0;

    int midx = getmaxx()/2;
    int midy = getmaxy()/2;

    setcolor(WHITE);
    settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(midx, midy+30, "Press any key to start");
    getch();
    cleardevice();

    for(i=0;i<400;i++) {
        // ================================== Bird ====================================
        //Body
        circle(150+i,150,20);
        arc(90+i,190,50,145,60);
        arc(87+i,117,220,320,60);

        //Beak
        line(170+i,147,180+i,153);
        line(180+i,153,170+i,156);
        //Eye
        circle(162+i,150,2);

        //Tail
        line(10+i,155,40+i,155);
        line(10+i,145,40+i,155);
        line(10+i,165,40+i,155);

        // To Move Hands
        if(i%2==0)
            handUp(i);
        else
            handDown(i);

        delay(40);
        <!--graphic-screenshot-->
        cleardevice();
    }
    getch();
    closegraph();
}