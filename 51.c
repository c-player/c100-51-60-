#define _CRT_SECURE_NO_WARNINGS 1

//学习使用按位与 &。

#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	printf("%d", a & b);
    return 0;
}
// & ：全1为1，有0为0
//  1  00000001
//  2  00000010
// 1&2 00000000  = 0