#define _CRT_SECURE_NO_WARNINGS 1

//ѧϰʹ�ð�λȡ��~��

#include <stdio.h>

int main()
{
	int a = 10;
	printf("%d", ~a);
    return 0;
}
// 10  00000000 00000000 00000000 00001010
//~10  11111111 11111111 11111111 11110101 (����)
//~10  10000000 00000000 00000000 00001010 (����)
//~10  10000000 00000000 00000000 00001011 (ԭ��) = -11
