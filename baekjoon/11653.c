#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	int i = 2;
	while (i <= a)
	{
		if (a % i == 0)
		{
			a = a / i;
			printf("%d\n", i);
			i = 1;
		}
		i++;
	}
}