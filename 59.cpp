#define _CRT_SECURE_NO_WARNINGS 1

//��ͼ���ۺ����ӡ�

#include <graphics.h>
#include <conio.h>

int main()
{
	// ������ͼ����
	initgraph(640, 480);

	// ����������(ͨ������������)
	float H = 190;  
	// 0 <= H < 360, Hue ������ĸ��ɫ�ࡣ��ɫ�� 0 �ȣ���ɫ�� 120 �ȣ���ɫ�� 240 �ȣ��Դ˷�����ɡ�
	float S = 1;	
	// 0 <= S <= 1, Saturation ������ĸ�����Ͷȡ����� 0 ʱΪ��ɫ������󱥺Ͷ� 1 ʱ���������ɫ�⡣
	float L = 0.7f;
	// Lightness ������ĸ�����ȡ����� 0 ʱΪ��ɫ������ 0.5 ʱ��ɫ����������״̬������ 1 ʱΪ��ɫ��
	for (int y = 0; y < 480; y++)
	{
		L += 0.0005f;
		setlinecolor(HSLtoRGB(H, S, L));
		line(0, y, 639, y);
	}

	// ���ʺ�(ͨ��ɫ��������)
	H = 0;
	S = 1;
	L = 0.5f;
	setlinestyle(PS_SOLID, 2);		// ��������Ϊʵ�ߣ��߿�Ϊ 2
	for (int r = 400; r > 344; r--)
	{
		H += 5;
		setlinecolor(HSLtoRGB(H, S, L));
		circle(500, 480, r);
	}

	// ��������˳�
	_getch();
	closegraph();
	return 0;
}