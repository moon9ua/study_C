// https://www.acmicpc.net/problem/2440

// <OK code>
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int line = 1;
	int star = n;
	int i;

	while (line <= n)
	{
		i = 1;
		while (i <= star)
		{
			printf("*");
			i++;
		}
		printf("\n");
		star--;
		line++;
	}
}