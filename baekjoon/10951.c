// https://www.acmicpc.net/problem/10951

// <OK code>
#include <stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) // != EOF 빼먹으면 출력초과뜸.
	{
		printf("%d\n", a+b);
	}
}