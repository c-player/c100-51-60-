#define _CRT_SECURE_NO_WARNINGS 1

//��ͼ��ѧ��line��ֱ��

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