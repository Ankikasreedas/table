#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void table1()
{
outtextxy(10,30,"Table 1: Weight of Oxalic Acid");
line(10,55,625,55);
line(10,110,625,110);
line(10,230,625,230);
line(10,55,10,230);
line(140,55,140,230);
line(240,55,240,230);
line(340,55,340,230);
line(482.5,55,482.5,230);
line(625,55,625,230);
outtextxy(40,65,"Initial");
outtextxy(40,85,"Weight");
outtextxy(160,65,"Final");
outtextxy(160,85,"Weight");
outtextxy(85,85,"(gm)");
outtextxy(185,95,"(gm)");
outtextxy(305,85,"(gm)");
outtextxy(430,85,"(gm)");
outtextxy(265,65,"Weight");
outtextxy(265,85,"Taken");
outtextxy(365,65,"Weight to");
outtextxy(365,85,"be taken");
outtextxy(520,75,"Strength");
}
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
table1();
getch();
closegraph();
}