// https://www.acmicpc.net/problem/10952

// <OK code>
#include <stdio.h>
int main()
{
	int a, b;

	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a+b);
	}
}