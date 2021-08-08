#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void openQQ()
{
	ShellExecute(0, "open", "D:\\Directory\\QQ\\Bin\\QQScLauncher.exe", 0, 0, 1);			//打开QQ
}

void moveQQ()
{
	HWND win = FindWindow("TXGuiFoundation", "QQ");			//HWND QQ窗口编号
	//FindFirstWindow寻找窗口
	if (win == NULL)
	{
		printf("没找到\n");
	}
	int i = 0;
	while (i < 1080)
	{
		SetWindowPos(win, NULL, i * 20 / 11, i, 400, 400, 0);
		Sleep(50);
		i += 10;
		if (i / 10 % 2 == 1)
		{
			ShowWindow(win, SW_HIDE);			//显示

		}
		else
		{
			ShowWindow(win, SW_NORMAL);			//隐藏
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