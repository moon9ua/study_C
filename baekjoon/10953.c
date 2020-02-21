// https://www.acmicpc.net/problem/10953

// <OK code>
#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);

	int i = 0;
	int a, b;
	while (i < t)
	{
		scanf("%d,%d", &a, &b); // 이게 될라나? 오 되네
		printf("%d\n", a+b);
		i++;
	}
}