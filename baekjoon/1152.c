// <OK code>
#include <stdio.h>

int is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return 1;
	else if ('A' <= c && c <= 'Z')
		return 1;
	else
		return 0;
}

int main()
{
	char str[1000001]; // 이게 되나...? 제한 없나?
	// hello를 저장하려면 null까지 포함해서 str[6]이어야 함.
	
	scanf("%[^\n]", str); // 이거 잘 모르겠네.

	int i = 0;
	int count = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) == 1 && is_alpha(str[i+1]) == 0)
			count++;
		i++;
	}
	printf("%d\n", count);
}