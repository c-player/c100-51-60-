#define _CRT_SECURE_NO_WARNINGS 1

//画图，学用circle画圆形。

/*
需安装easyx库，访问网址https://www.easyx.cn
文件名后缀需为.cpp，easyx仅支持c++
若VS报错，可在项目->属性->配置属性->C/C+±>预处理器->预处理器定义->编辑中添加
_CRT_SECURE_NO_DEPRECATE
_CRT_NONSTDC_NO_DEPRECATE
或将getch()改成_getch()
*/

#include <graphics.h>
#include <conio.h>

int main()
{
	initgraph(640, 480);      //初始化绘图屏幕，像素640*480
	circle(320, 240, 100);    //以(320,240)为圆心，100为半径画圆
	getch();
	closegraph();
	return 0;
}
