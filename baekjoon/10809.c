// <OK code>
// 뭔가 완전 깔끔한 것 같진 않은데... 맞긴 맞음.

#include <stdio.h>

int main()
{
	char c;
	c = 'a';

	char str[110];
	scanf("%s", str);	// 더 넉넉히 공간 잡아도, 쓰레기값이 문제가 되진 않는듯? 뭔가 null 문자가 마지막에 들어가나봐..?

	int i;

	while (c <= 'z')
	{
		i = 0;
		while (str[i])
		{
			if (str[i] == c)
			{
				printf("%d ", i);
				break;
			}
			if (!str[i+1])
			{
				printf("%d ", -1);
				break;
			}
			i++;
		}
		c++;
	}
}
