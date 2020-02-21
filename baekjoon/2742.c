// https://www.acmicpc.net/problem/2742

// <OK code>
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int i = n;
	while (i > 0)
	{
		printf("%d\n", i);
		i--;
	}
}