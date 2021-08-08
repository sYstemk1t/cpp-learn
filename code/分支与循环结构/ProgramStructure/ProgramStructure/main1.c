#include <stdio.h>
#include <stdlib.h>

void WriteFileTasklist()
{
	system("tasklsit > 1.txt");
}


void AddWriteFileTasklist()
{
	system("tasklsit >> 1.txt");
}


void main1(int argc,char *argv[])
{

	//记录所有进程写入文件
	WriteFileTasklist();
	AddWriteFileTasklist();

	
	
}