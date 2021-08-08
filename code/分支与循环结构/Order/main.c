#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>


void fun1()
{
	printf("1\n");
	printf("12\n");
	printf("123\n");
}


void fun2()
{
	fun1();				//进入函数后第一个执行
	printf("1234\n");
	printf("12345\n");
	printf("123456\n");
}

int main()
{
	fun1();			//先调用
	fun2();
	getchar();
	return 0;
	
}