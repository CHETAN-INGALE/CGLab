#include<graphics.h>
#include<conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    line(25,25,600,450);
    getch();
    closegraph();
    return 0;
}