#define _CRT_SECURE_NO_WARNINGS 1

//画图，综合例子。

#include <graphics.h>
#include <conio.h>

int main()
{
	// 创建绘图窗口
	initgraph(640, 480);

	// 画渐变的天空(通过亮度逐渐增加)
	float H = 190;  
	// 0 <= H < 360, Hue 的首字母，色相。红色在 0 度，绿色在 120 度，蓝色在 240 度，以此方向过渡。
	float S = 1;	
	// 0 <= S <= 1, Saturation 的首字母，饱和度。等于 0 时为灰色。在最大饱和度 1 时，具有最纯的色光。
	float L = 0.7f;
	// Lightness 的首字母，亮度。等于 0 时为黑色，等于 0.5 时是色彩最鲜明的状态，等于 1 时为白色。
	for (int y = 0; y < 480; y++)
	{
		L += 0.0005f;
		setlinecolor(HSLtoRGB(H, S, L));
		line(0, y, 639, y);
	}

	// 画彩虹(通过色相逐渐增加)
	H = 0;
	S = 1;
	L = 0.5f;
	setlinestyle(PS_SOLID, 2);		// 设置线形为实线，线宽为 2
	for (int r = 400; r > 344; r--)
	{
		H += 5;
		setlinecolor(HSLtoRGB(H, S, L));
		circle(500, 480, r);
	}

	// 按任意键退出
	_getch();
	closegraph();
	return 0;
}