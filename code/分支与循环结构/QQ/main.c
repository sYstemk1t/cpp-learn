#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void openQQ()
{
	ShellExecute(0, "open", "D:\\Directory\\QQ\\Bin\\QQScLauncher.exe", 0, 0, 1);			//��QQ
}

void moveQQ()
{
	HWND win = FindWindow("TXGuiFoundation", "QQ");			//HWND QQ���ڱ��
	//FindFirstWindowѰ�Ҵ���
	if (win == NULL)
	{
		printf("û�ҵ�\n");
	}
	int i = 0;
	while (i < 1080)
	{
		SetWindowPos(win, NULL, i * 20 / 11, i, 400, 400, 0);
		Sleep(50);
		i += 10;
		if (i / 10 % 2 == 1)
		{
			ShowWindow(win, SW_HIDE);			//��ʾ

		}
		else
		{
			ShowWindow(win, SW_NORMAL);			//����
		}
	}
	
}


int main()
{
	openQQ();
	Sleep(5000);
	moveQQ();
	return 0;
}