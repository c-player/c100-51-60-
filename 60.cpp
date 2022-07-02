#define _CRT_SECURE_NO_WARNINGS 1

//画图，综合例子2。

#include <graphics.h>
#include <time.h>
#include <conio.h>

int main()
{
	// 设置随机种子
	srand((unsigned)time(NULL));

	// 初始化图形模式
	initgraph(640, 480);

	int  x, y;
	char c;

	settextstyle(16, 8, _T("Courier"));	// 设置当前字体为高16像素、宽8像素的"Courier"。

	// 设置颜色
	settextcolor(GREEN);
	setlinecolor(BLACK);

	for (int i = 0; i <= 479; i++)
	{
		// 在随机位置显示三个随机字母
		for (int j = 0; j < 3; j++)
		{
			x = (rand() % 80) * 8;
			y = (rand() % 20) * 24;
			c = (rand() % 26) + 65;
			outtextxy(x, y, c);
		}

		// 画线擦掉一个像素行
		line(0, i, 639, i);

		Sleep(10);					// 延时
		if (i >= 479)	i = -1;
		if (_kbhit())	break;		// 按任意键退出  _kbhit()：检查当前是否有键盘输入，有则返回非0，无返回0
	}                               //               头文件：<conio.h>

	// 关闭图形模式
	closegraph();
	return 0;
}