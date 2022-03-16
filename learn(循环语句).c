#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//循环语句
int main()
{
	int line = 0;
	//while循环
	while (line < 30000)
	{
		printf("写代码:%d\n",line);
		line++;
	}
	if (line == 30000)
	{
		printf("好offer\n");
	}

	return 0;
}




