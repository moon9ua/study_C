// 그대로 출력하기 (https://www.acmicpc.net/problem/11718)


// <OK code>
// #include <stdio.h>
// int main()
// {
// 	char a[101];
// 	while (scanf("%[^\n]\n", a) == 1) // %[^\n] 뒤의 \n는 도대체 뭐야!!!!!
// 		printf("%s\n", a);
// }
/* 한 줄씩 밀려서 나오는데... 이게 맞네? 블로그에 답으로 주로 올라와있음. */


// <OK code>
// #include <stdio.h>
// int main()
// {
// 	char a;
// 	while(scanf("%c", &a) != -1)
// 		printf("%c", a);
// }


// <OK code>
// #include <unistd.h>
// int main()
// {
// 	char buf;
// 	while (read(0, &buf, 1))
// 	{
// 		if (buf == -1)
// 			break;
// 		write(1, &buf, 1);
// 	}
// }
/* 카톡 센세가 알려주신 방법. 위랑 뭐가 다르지..? 질문할것!!!!! */


// <OK code>
// #include <stdio.h>
// int main()
// {
// 	char inp;
// 	inp = getchar();
// 	while(inp != EOF)
// 	{
// 		putchar(inp);
// 		inp = getchar();
// 	}
// }
/* 드디어 이해했다..! 개행도 바로 읽고 쓰이기 때문에
반복문은 파일이 끝나기 전까지 계속 돌아가는 것. */


// <KO code>
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	char str[101];
// 	while (i < 100)
// 	{
// 		gets(str);
// 		puts(str);
// 		// printf("%s\n", str);
// 		i++;
// 	}
// }


// <OK code>
// #include <stdio.h>
// int main()
// {
// 	char str[110];
// 	int i;
// 	int j = 0;
// 	while (j < 100)
// 	{
// 		i = 0;
// 		while (i < 101)
// 		{
// 			str[i] = getchar();
// 			if (str[i] == EOF) // EOF 대신 '\0' 을 해서 틀림...
// 				return 0; // djm03178 선생님 감사합니다 TT...
// 			if (str[i] == '\n')
// 			{
// 				str[i] = '\0';
// 				break;
// 			}
// 			i++;
// 		}
// 		printf("%s\n", str);
// 		j++;
// 	}
// }
/* 내가 원하던 한줄씩 저장하는 답!!!
https://www.acmicpc.net/board/view/47061#post
getchar는 절대 \0을 반환(?)하지 않기 때문에 저 두줄이 문제였음.
이건 처음 짠거라 i, j 아직 안바꿈. 귀찮아서.. */


// <OK code>
#include <stdio.h>
int main()
{
	char str[110];
	int i = 0;
	int j;
	while (i < 100)
	{
		j = 0;
		while (j < 101)
		{
			scanf("%c", &str[j]);
			if (str[j] == '\0') // scanf는 null문자를 반환해줘서 이 코드는 맞음.
				return 0; // 일단 이 두줄이 필요하다는 것도 사실 확신 없었음..
			if (str[j] == '\n')
			{
				str[j] = '\0';
				break;
			}
			j++;
		}
		printf("%s\n", str);
		i++;
	}
}
/* getchar와 다르게 scanf는 null문자 반환해줘서 저렇게 해도 됨. 
i랑 j 급하게 바꾸느라... 안돌아갈수도. */


// <OK code>
// #include <stdio.h>
// #include <unistd.h>
// int main()
// {
// 	char str[110];
// 	int size;

// 	while (size = read(0, str, 110))
// 	{
// 		write(1, str, size);
// 		// printf("%d\n", size);
// 	}
// }
/* 개행까지가 저장됨. 개행 다음은 왜 EOF 처리되는거지?
이부분 해결하자!!! 찾아볼것!!! */