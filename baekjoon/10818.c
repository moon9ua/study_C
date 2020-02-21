// https://www.acmicpc.net/problem/10818

// <OK code>
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int i = 0;
	int save;
	int max = 0;
	int min = 0;
	while (i < n)
	{
		scanf("%d", &save);
		if (i == 0 || max < save)
			max = save;
		if (i == 0 || min > save)
			min = save;
		i++;
	}
	printf("%d %d\n", min, max);
}