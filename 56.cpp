#define _CRT_SECURE_NO_WARNINGS 1

//��ͼ��ѧ��circle��Բ�Ρ�

/*
�谲װeasyx�⣬������ַhttps://www.easyx.cn
�ļ�����׺��Ϊ.cpp��easyx��֧��c++
��VS����������Ŀ->����->��������->C/C+��>Ԥ������->Ԥ����������->�༭�����
_CRT_SECURE_NO_DEPRECATE
_CRT_NONSTDC_NO_DEPRECATE
��getch()�ĳ�_getch()
*/

#include <graphics.h>
#include <conio.h>

int main()
{
	initgraph(640, 480);      //��ʼ����ͼ��Ļ������640*480
	circle(320, 240, 100);    //��(320,240)ΪԲ�ģ�100Ϊ�뾶��Բ
	getch();
	closegraph();
	return 0;
}
