#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char ch = getchar();
	getchar();							//�̻س�
	if (ch > '0' && ch <= '9')
	{
		printf("����\n");
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		printf("��д��ĸ\n");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("Сд��ĸ\n");
	}
	else
	{
		printf("�ַ�\n");
	}
	system("pause");
	return 0;
}