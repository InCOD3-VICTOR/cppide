#include<graphics.h>
#include<iostream>
using namespace std;

main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // S letter
    line(50, 100, 100, 100);
    line(50, 100, 50, 150);
    line(50, 150, 100, 150);
    line(100, 150, 100, 200);
    line(100, 200, 50, 200);

    // O letter
    line(150, 125, 200, 125);
    line(200, 125, 200, 200);
    line(200, 200, 150, 200);
    line(150, 200, 150, 125);

    // U letter
    line(250, 125, 250, 200);
    line(250, 200, 300, 200);
    line(300, 200, 300, 125);

    // L letter
    line(350, 125, 350, 200);
    line(350, 200, 400, 200);

    // E letter
    line(450, 125, 450, 200);
    line(450, 125, 500, 125);
    line(450, 162, 500, 162);
    line(450, 200, 500, 200);

    // H letter
    line(550, 125, 550, 201);
    line(550, 162, 600, 162);
    line(600, 125, 600, 201);

    getch();
    closegraph();
}