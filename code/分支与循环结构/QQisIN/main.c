#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[4098];
	memset(str, 0, sizeof(char));
	scanf("%4096s", &str);
	char *p = strstr(str, "D:\\Directory\\QQ\\Bin\\QQ.exe");
	//char *p = strstr(str, "D:\\Directory\\QQ\\Bin\\QQ.exe");				//�޸�Ϊ�Լ���QQĿ¼
	if (p == NULL)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}
	getchar();
	return 0;
}