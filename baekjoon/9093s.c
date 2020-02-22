// https://www.acmicpc.net/problem/9093

// <OK code>
#include <stdio.h>

int is_word(char c)
{
	if ('a' <= c && c <= 'z')
		return 1;
	if ('A' <= c && c <= 'Z')
		return 1;
	return 0;
}

int ft_count(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		if (is_word(str[i]) == 1 && is_word(str[i+1]) == 0)
			count++;
		i++;
	}
	return count;
}

int ft_len(char *str)
{
	int i = 0;
	while (is_word(str[i]) == 1)
		i++;
	return i;
}

void ft_rev(char *str)
{
	int word_count;
	word_count = ft_count(str);

	int	word_len;	

	int i = 0;
	int j;
	while(i < word_count)
	{
		word_len = ft_len(str);
		j = 0;
		while (j < word_len)
		{
			printf("%c", str[word_len-j-1]);
			j++;
		}
		printf(" ");
		while (is_word(*str) == 1)
			str++;
		while (is_word(*str) == 0)
			str++;
		i++;
	}
	printf("\n");
}

int main()
{
	int t;
	scanf("%d", &t); // %d 뒤에 공백 안붙여서 엄청 헤맴.

	char str[1010];
	int i = 0;
	int j;
	while (i < t)
	{
		j = 0;
		while (j < 1000)
		{
			scanf("%c", &str[j]);
			if (str[j] == '\0')
				return 0;
			if (str[j] == '\n')
			{
				str[j] = '\0';
				break;
			}
			j++;
		}
		ft_rev(str);
		i++;
	}
}

/*
 ./a.out
2

i am happy
i ma yppah

이런 식으로 공백이 하나 나오면서 결과가 t-1개만 나오는 문제로 헤맴.
원인은 개행문자가 버퍼에 저장되어 있었기 때문.
(https://www.acmicpc.net/board/view/47071#post)

해결방법은 "%d ". 공백이 아닌 글자를 만날때까지 읽고, 읽은 것은 버린다.
이 외에도 여러 해결방법이 있다.
예를 들어 아무 다른 글자에 scanf를 써서 버퍼를 넘겨준다거나..
(이 방법은 해보진 않아서 할수 있을진 모르겠다.)

어쨌거나 문제와 해결 키워드를 알았으니, 공부해보자.
아직 문자열을 입, 출력하는 것이 완벽히 익숙하진 않지만..
그래도 좀 늘었..다고 할 수 있겠지?

그리고 하나 더 해볼것!
%c를 통해 한 줄 씩 저장하는 것은 성공했는데,
%s도 이제는 시도해봐도 될 듯? 안된다면 안되는 이유를 이제는 이해할 수 있을 듯.
*/