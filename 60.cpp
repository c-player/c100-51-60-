#define _CRT_SECURE_NO_WARNINGS 1

//��ͼ���ۺ�����2��

#include <graphics.h>
#include <time.h>
#include <conio.h>

int main()
{
	// �����������
	srand((unsigned)time(NULL));

	// ��ʼ��ͼ��ģʽ
	initgraph(640, 480);

	int  x, y;
	char c;

	settextstyle(16, 8, _T("Courier"));	// ���õ�ǰ����Ϊ��16���ء���8���ص�"Courier"��

	// ������ɫ
	settextcolor(GREEN);
	setlinecolor(BLACK);

	for (int i = 0; i <= 479; i++)
	{
		// �����λ����ʾ���������ĸ
		for (int j = 0; j < 3; j++)
		{
			x = (rand() % 80) * 8;
			y = (rand() % 20) * 24;
			c = (rand() % 26) + 65;
			outtextxy(x, y, c);
		}

		// ���߲���һ��������
		line(0, i, 639, i);

		Sleep(10);					// ��ʱ
		if (i >= 479)	i = -1;
		if (_kbhit())	break;		// ��������˳�  _kbhit()����鵱ǰ�Ƿ��м������룬���򷵻ط�0���޷���0
	}                               //               ͷ�ļ���<conio.h>

	// �ر�ͼ��ģʽ
	closegraph();
	return 0;
}