// (*) 문자열 분석 (https://www.acmicpc.net/problem/10820)


// <OK code>
#include <stdio.h>
#include <string.h>

int main()
{
	char n[101];
	int big, sm, sp, num, length, i;

	while (gets(n) != '\0') // 이 부분이 문제. 반복문 안에 scanf건 뭐건 넣는거 이해 못했음.
	{
		length = strlen(n);
		big = 0; sm = 0; sp = 0; num = 0; i = 0;
		while (i < length)
		{
			if ('A' <= n[i] && n[i] <= 'Z')
				big++;
			else if ('a' <= n[i] && n[i] <= 'z')
				sm++;
			else if (n[i] == ' ')
				sp++;
			else if ('0' <= n[i] && n[i] <= '9')
				num++;
			i++;
		}
		printf("%d %d %d %d\n", sm, big, num, sp);
	}
}


/*
<comment>
문자열 여러개 입력 받는 것이 아직 문제.

참고코드: https://j0n9m1n1.com/163

공부해야할 개념.
gets() 코딩도장: https://dojang.io/mod/page/view.php?id=762
gets() BlockDMask: https://blockdmask.tistory.com/343

getline()을 이용해서도 가능한 것 같다. 찾아볼 것. 
*/