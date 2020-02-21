// https://www.acmicpc.net/problem/11721

// <OK code>
#include <stdio.h>
int main()
{
	char str[101];
	scanf("%s", str);

	int i = 0;
	while (str[i]) // i < 100 으로 하면 쓰레기값도 나옴.
	{
		printf("%c", str[i]);
		// if (i != 0 && i % 9 == 0) // 첫줄은 10개인데 다음줄부터 9개.
		if (i % 10 == 9) // 이렇게하면 해결됨.
			printf("\n");
		i++;
	}
	printf("\n"); // 마지막줄 개행안해서 틀렸었음.
}