// 그대로 출력하기 (https://www.acmicpc.net/problem/11718)


// <OK code>
// 한 줄씩 밀려서 나오는데... 이게 맞네? 블로그에 답으로 주로 올라와있음.
// #include <stdio.h>
// int main()
// {
// 	char a[101];
// 	while (scanf("%[^\n]\n", a) == 1) // %[^\n] 뒤의 \n는 도대체 뭐야!!!!!
// 		printf("%s\n", a);
// }


// <OK code>
// #include <stdio.h>
// int main()
// {
// 	char a;
// 	while(scanf("%c", &a) != -1)
// 		printf("%c", a);
// }


// <KO code>
// 왜 틀릴까?...는 아마 read(1, &buf, 1)여서?
// #include <unistd.h>
// int main()
// {
// 	char buf;
// 	// int i = 0;

// 	// while (i < 100)
// 	// {
// 		// while (read(1, &buf, 1) != -1 && buf != '\n')
// 		while (read(1, &buf, 1) != -1)
// 		{
// 			write(1, &buf, 1);
// 		}
// 		// write(1, "\n", 1);
// 		// i++;
// 	// }
// }


// <출력초과>
// #include <unistd.h>
// int main()
// {
// 	char buf;
// 	while (read(0, &buf, 1) != -1)
// 		write(1, &buf, 1);
// }


// <OK code>
// 카톡 센세가 알려주신 방법. 위랑 뭐가 다르지..? 질문할것!!!!!
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


// 하나씩 읽고, 하나씩 쓰는 방법 말고.. 한번에 읽고 쓰는 방법 해보고 싶었는데.
// 한 번은 되는데, 반복을 못 시키겠다.!!!!! 해결 필요.!!!!!
// #include <stdio.h>
// int main()
// {
// 	char str[101];
// 	scanf("%[^\n]s", str);
// 	printf("%s\n", str);
// }


#include <stdio.h>
int main()
{
	char inp;
	inp = getchar();
	while(inp != EOF)
	{
		putchar(inp);
		inp = getchar();
	}
}
/* 드디어 이해했다..! 개행도 바로 읽고 쓰이기 때문에
반복문은 파일이 끝나기 전까지 계속 돌아가는 것. */