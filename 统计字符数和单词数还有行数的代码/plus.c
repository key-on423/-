#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '#'
int main()
{
	char ch;
	char prev;
	int zifushu = 0;
	int dancishu = 0;
	int hangshu = 0;
	int teshuhang = 0;
	bool isword = false;
	prev = '\n';
	printf("����������˵��Ӣ�#��Ϊ���һ���ַ�Ϊ�������\n");
	printf("��ʶ���ַ��磡 �� �Ȳ���Ҫ�ӿո�\n");
	while ((ch = getchar()) != STOP)
	{
		zifushu++;
		if (ch == '\n')
			hangshu++;
		if (!isword && !isspace(ch))
		{
			isword = true;
			dancishu++;
		}
		if (isspace(ch) && isword)
		{
			isword = false;
			prev = ch;
		}
	}
	if (prev != '\n')
		teshuhang++;
	printf("�������Ӣ���������%d���ַ�%d������%d�����ݺ�%d��������\n", zifushu, dancishu, hangshu, teshuhang);
	return 0;
}