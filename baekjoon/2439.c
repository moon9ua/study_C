// https://www.acmicpc.net/problem/2439

// <OK code>
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int line = 1;
	int i;
	while (line <= n)
	{
		i = 1;
		while (i <= n - line)
		{
			printf(" ");
			i++;
		}
		i = 1;
		while (i <= line)
		{
			printf("*");
			i++;
		}
		printf("\n");
		line++;
	}
}