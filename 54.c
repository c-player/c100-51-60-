#define _CRT_SECURE_NO_WARNINGS 1

//ȡһ������ a ���Ҷ˿�ʼ�� 4��7 λ��

#include <stdio.h>

int main()
{
	int a;
	int i = 0;
	int arr[32] = { 0 };
	printf("������һ��������");
	scanf("%d", &a);
	printf("%d�Ķ������ǣ�", a);
	for (i = 31; i >= 0; i--)
	{
		arr[i] = a & 1;
		a = a >> 1;
	}
	for (i = 0; i < 32; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n�Ҷ˵�4λ-��7λ��");
	for (i = 25; i < 29; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}
