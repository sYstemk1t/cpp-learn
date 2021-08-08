#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
void main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (a < b)				//ab»¥»»
	{
		int temp = a;
		a = b;
		b = temp;
	}

	if (a < c)
	{
		a = a + b;
		b = a - b;
		c = a - b;
	}

	if (b < c)
	{
		b = b ^ c;
		c = b ^ c;
		b = b ^ c;
	}

	printf("a = %d b = %d c = %d\n", a, b, c);
	getchar();
	system("pause");
}