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

	//��¼���н���д���ļ�
	WriteFileTasklist();
	AddWriteFileTasklist();

	
	
}