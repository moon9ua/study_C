// <OK code>

#include <stdio.h>

int main()
{
	char str[101];
	scanf("%s", str);

	int i;
	int count;
	char c = 'a';
	while (c <= 'z')
	{
		i = 0;
		count = 0;
		while (str[i])
		{
			if (str[i] == c)
				count++;
			i++;
		}
		printf("%d ", count);
		c++;
	}
}