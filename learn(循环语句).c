#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//ѭ�����
int main()
{
	int line = 0;
	//whileѭ��
	while (line < 30000)
	{
		printf("д����:%d\n",line);
		line++;
	}
	if (line == 30000)
	{
		printf("��offer\n");
	}

	return 0;
}




