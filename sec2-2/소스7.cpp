#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int god(int x, int y)
{
	if (y == 0)
		return x;
	else
		return god(y, x % y);
}

int main(void)
{
	int x, y;
	puts("�� ������ �ִ� ������� ���մϴ�.");
	printf("������ �Է��ϼ���.");
	scanf_s("%d", &x);
	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &y);
	printf("�ִ������� %d�Դϴ�.\n", god(x, y));

	return 0;
}