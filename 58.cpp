#define _CRT_SECURE_NO_WARNINGS 1

#include <conio.h>
#include <graphics.h>

int main()
{
	initgraph(640, 480);
	rectangle(200, 280, 400, 100);
	_getch();
	closegraph();
    return 0;
}