#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[4098];
	memset(str, 0, sizeof(char));
	scanf("%4096s", &str);
	char *p = strstr(str, "D:\\Directory\\QQ\\Bin\\QQ.exe");
	//char *p = strstr(str, "D:\\Directory\\QQ\\Bin\\QQ.exe");				//修改为自己的QQ目录
	if (p == NULL)
	{
		printf("存在\n");
	}
	else
	{
		printf("不存在\n");
	}
	getchar();
	return 0;
}