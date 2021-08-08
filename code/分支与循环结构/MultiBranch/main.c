#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char ch = getchar();
	getchar();							//ÍÌ»Ø³µ
	if (ch > '0' && ch <= '9')
	{
		printf("Êý×Ö\n");
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		printf("´óÐ´×ÖÄ¸\n");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("Ð¡Ð´×ÖÄ¸\n");
	}
	else
	{
		printf("×Ö·û\n");
	}
	system("pause");
	return 0;
}