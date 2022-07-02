#define _CRT_SECURE_NO_WARNINGS 1

//取一个整数 a 从右端开始的 4～7 位。

#include <stdio.h>

int main()
{
	int a;
	int i = 0;
	int arr[32] = { 0 };
	printf("请输入一个整数：");
	scanf("%d", &a);
	printf("%d的二进制是：", a);
	for (i = 31; i >= 0; i--)
	{
		arr[i] = a & 1;
		a = a >> 1;
	}
	for (i = 0; i < 32; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n右端第4位-第7位：");
	for (i = 25; i < 29; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}
