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
	printf("请输入你想说的英语，#作为最后一个字符为结束表达\n");
	printf("标识类字符如！ ？ 等不需要加空格\n");
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
	printf("你输入的英语语句中有%d个字符%d个单词%d行内容和%d个特殊行\n", zifushu, dancishu, hangshu, teshuhang);
	return 0;
}