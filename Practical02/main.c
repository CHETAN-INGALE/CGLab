#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>

float round(float a){
    int b=a+0.5;
    return b;
}
 void main( ){
    float x,y,x1,y1,x2,y2,dx,dy,step,xincr,yincr,k;
    int i,gd=DETECT,gm;
    clrscr();
    printf("Enter the value of x1 and y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%f%f",&x2,&y2);
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if(dx>=dy)
        step=dx;
    else
        step=dy;
    xincr=dx/step;
    yincr=dy/step;
    x=x1;
    y=y1;
    for(k=1;k<=step;k++){
        delay(10);
        x+=xincr;
        y+=yincr;
        putpixel(round(x),round(y),WHITE);
    }
    outtextxy(200,20,"DDA");
    outtextxy(x1+5,y1-5,"(x1,y1)");
    outtextxy(x2+5,y2+5,"(x2,y2)");
    getch();
    closegraph();
}