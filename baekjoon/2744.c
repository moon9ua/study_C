// 대소문자 바꾸기 (https://www.acmicpc.net/problem/2744)


// <OK code>
#include <stdio.h>

int main()
{
	char str[110];
	scanf("%s", str);

	int i = 0;
	char tmp;
	while (str[i])
	{
		tmp = str[i];
		// if ('a' <= tmp <= 'z') // 아 여기가 틀렸구나. 파이썬에 익숙해져서..
		if ('a' <= tmp && tmp <= 'z')
		{
			str[i] = str[i] - ('a'-'A');
		}
		else if ('A' <= tmp && tmp <= 'Z')
		{
			str[i] = str[i] + ('a'-'A');
		}		
		i++;
	}
	printf("%s\n", str);
}