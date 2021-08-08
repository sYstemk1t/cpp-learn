#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


int main1()
{
	int i = 5;
	/*
	do
	{
		system("notepad");				//5次
		i--;
	} while (i);*/


	/*
	do
	{
		printf("notepad\n");				//6次
		
	} while (i--);*/


	do
	{
		malloc(500 * 1024 * 1024);
		printf("ok\n");

	} while (1);
	getchar(); 
	return 0;
}

int main()
{
	char ch;
	char c;
	do
	{
		c = getchar();
		if (c >= 'A' && c <= 'Z')
		{
			c = c + 32;				//大写转小写
			
		}
		putchar(c);
		printf("\n"); 
		getchar();			//吞回车
	} while (c = '\t');
	system("pause");
	return 0;
}