#define _CRT_SECURE_NO_WARNINGS 1

//学习使用按位或 |。

#include <stdio.h>
int main()
{
	int a = 1, b = 2;
	printf("%d", a | b);
    return 0;
}
// | ：有1为1，全0为0
//  1  00000001
//  2  00000010
// 1|2 00000011  = 3