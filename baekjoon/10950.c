// https://www.acmicpc.net/problem/10950

// <OK code>
#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);

	int i = 0;
	int a;
	int b;
	while (i < t)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
		i++;
	}
}