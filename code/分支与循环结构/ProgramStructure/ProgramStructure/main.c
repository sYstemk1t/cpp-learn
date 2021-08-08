#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "head.h"
/*假如你现在遇到了莆田系医院，我们现在去报仇，我们需要不停的去点击莆田系医院，消耗莆田系医院的推广费*/

//1.打开浏览器




//2.转到网址

//3.搜索


//4.点击


//5.关闭

int main(int argc, char *argv[])
{
	//1.全盘最小化
	//鼠标操作
	/*
	mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, 40 * 65535 / 1920, 40 * 65535 / 1080, NULL, NULL);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	*/
	
	open("https://www.baidu.com/");
	Sleep(3000);
	close();
}
