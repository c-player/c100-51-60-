#define _CRT_SECURE_NO_WARNINGS 1

//画图，学用line画直线

#include <conio.h>
#include <graphics.h>

int main()
{
	initgraph(640, 480);
	line(200, 240, 400, 240);
	_getch();
	closegraph();
    return 0;
}