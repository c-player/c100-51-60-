#define _CRT_SECURE_NO_WARNINGS 1

//ѧϰʹ�ð�λ��� ^��

#include <stdio.h>

int main()
{
	int a = 2, b = 2;
	printf("%d", a ^ b);
	return 0;
}
// & ����ͬΪ0����ͬΪ1
//  1  00000010
//  2  00000010
// 1^2 00000000  = 0