#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	enum Week
	{
		星期一, 星期二, 星期三, 星期四, 星期五, 星期六, 星期七
	};
	enum week week1 = 星期四;
	printf("%d\n", 星期三);
	printf("%d\n", week1);
	system("pause");
	return 0;
}