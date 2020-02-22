// https://www.acmicpc.net/problem/2441

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int line = 1;
	int space = 0;
	int star = n;
	int i;
	while (line <= n)
	{
		i = 0;
		while (i < space)
		{
			printf(" ");
			i++;
		}
		i = 0;
		while (i < star)
		{
			printf("*");
			i++;
		}
		printf("\n");
		space++;
		star--;
		line++;
	}
}