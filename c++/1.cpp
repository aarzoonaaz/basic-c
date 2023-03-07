#include<conio.h>
#include<graphics.h>
#include<stdio.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\turbo3\\bgi");
	setfillstyle(SOLID_FILL, CYAN);
	
	// Head outer circle
	circle(500,200,100);
	
	//Head inner circle
	circle(500,212,88);
	floodfill(502,102,15);
	setfillstyle(SOLID_FILL,CYAN);
	
	//Body outer circle
	circle(500,400,100);
	
	//Body inner circle
	circle(500,388,88);
	floodfill(502,498,15);
	setfillstyle(SOLID_FILL,RED);
	
	//NOSE
	circle(502,214,10);
	floodfill(504,216,15);
	
	//left eye
	circle(460,170,15);
	
	//right eye
	circle(540,170,15);
	
	
	
	
}


