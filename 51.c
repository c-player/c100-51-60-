#define _CRT_SECURE_NO_WARNINGS 1

//ѧϰʹ�ð�λ�� &��

#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	printf("%d", a & b);
    return 0;
}
// & ��ȫ1Ϊ1����0Ϊ0
//  1  00000001
//  2  00000010
// 1&2 00000000  = 0