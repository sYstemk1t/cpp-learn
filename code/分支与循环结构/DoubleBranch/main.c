#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main1()
{
	if (0)
	{
		system("calc");
	}
	else if (1)
	{
		system("mspaint");
	}
	else
	{
		system("notepad");
	}
	return 0;
}

int main()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	int abs, bbs;
	if (a>0)
	{
		abs = a;
	}
	else
	{
		abs = a * -1;
	}

	if (b > 0)
	{
		bbs = b;
	}

	else
	{
		bbs = b *-1;
	}
	printf("%d\n", abs > bbs ? a : b);
	system("pause");
	return 0;
}