#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "head.h"
/*��������������������ϵҽԺ����������ȥ����������Ҫ��ͣ��ȥ�������ϵҽԺ����������ϵҽԺ���ƹ��*/

//1.�������




//2.ת����ַ

//3.����


//4.���


//5.�ر�

int main(int argc, char *argv[])
{
	//1.ȫ����С��
	//������
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
