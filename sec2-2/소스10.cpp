#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];

	scanf("%s", name);

	if (strcmp(name, "���縲") == 0)
	{ 
		printf("%s, �ȳ�\n", name);}
	}
	else{
		printf("%s��,�ȳ��ϼ���.\n", name);
}
}