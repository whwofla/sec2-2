#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int* a;
	int na;
	printf("��� ����: ");
	scanf("%d", &na);
	a = calloc(na, sizeof(int));

	if (a == NULL)
		puts("�޸� Ȯ���� �����߽��ϴ�.");
	else {
		printf("%d���� ������ �Է��ϼ���.\n", na);
		for (i = 0; i < na; i++) {
			printf("a[%d]: ", i);
			scanf("%d", &a[i]);
		}
		printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
		for (i = 0; i < na; i++)
			printf("a[%d]=%d\n", i, a[i]);
		free(a);
	}

	return 0;
}