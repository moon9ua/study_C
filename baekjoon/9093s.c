// https://www.acmicpc.net/problem/9093

// <하다가 포기>
#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d", &t);
	
	char buf;
	int len = 0;
	while (read(0, &buf, 1) && ++len)
	{
		if (buf == '\n')
			break;
	}
	
}

/*
도대체 한줄씩 저장을 어떻게 하는것이야... T_T 여기서 계속 막힘. 한글자씩만 해봐서..
rush02에서 했던거랑 비슷한건가...? 감도 안잡힘.
*/

/*
<참고>
https://electro-don.tistory.com/entry/scanf-n-%EA%B4%80%EB%A0%A8
https://m.blog.naver.com/PostView.nhn?blogId=gksvlfgh0602&logNo=221159664224&proxyReferer=https%3A%2F%2Fwww.google.com%2F
https://sengsung.tistory.com/71
*/