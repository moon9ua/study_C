// https://jhnyang.tistory.com/128 정리 잘 되어있음.



/* --------------------------------------------------ㄱ */
// <OK code>
// 배열 형식으로 해보려고 했는데 잘 안됨.
// 한 줄씩 밀려서 나오는데... 이게 맞다고? 블로그에 답으로 주로 올라와있음.

// #include <stdio.h>

// int main()
// {
// 	char a[101];
// 	while (scanf("%[^\n]\n", a) == 1) // scanf("%s", a); // 공백이 나오면 문자열이 끊김.
// 	{
// 		printf("%s\n", a);
// 	}
// 	return 0;
// }



/* --------------------------------------------------ㄱ */
// <OK code>
// 제일 정확한 답.
// 정확히 이해가 안됨. scanf, printf도 익숙하지 않고, while문안에 넣는 것도 어색.

// #include <stdio.h>

// int main()
// {
// 	char a;

// 	while(scanf("%c", &a) != -1)
// 		printf("%c", a);
// }



/* --------------------------------------------------ㄱ */
// <KO code>

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
// 		// write(1, "\n", 1);	// 처음엔 써줬으나... 이해하고 보니 없어도 되는거였음.
// 		// i++;
// 	// }
// }



// <출력초과> ...는 뭐여. 처음 보는데.

// #include <unistd.h>

// int main()
// {
// 	char buf;
// 	while (read(0, &buf, 1) != -1)
// 	{
// 		write(1, &buf, 1);
// 	}
// }



/* --------------------------------------------------ㄱ */
// <OK code>
// 카톡 센세가 알려주신 방법.
// 맞은 방법들... 다 이해 못했다. 어떻게 반복문이 유지가 되는것이지...?

#include <unistd.h>

int main()
{
	char buf;
	while (read(0, &buf, 1))
	{
		if (buf == -1)
			break;
		write(1, &buf, 1);
	}
}