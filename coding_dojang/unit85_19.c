// 85.19 문자열 입출력 함수 사용하기 (https://dojang.io/mod/page/view.php?id=762)

/*
stdio.h의 문자열 입출력 함수들:
scanf, printf, fgets, fputs, gets_s, puts, fgetc, putc
*/

/*
gets_s(버퍼, 버퍼크기): 성공하면 입력된 문자열 반환, 실패하면 null 반환.
puts(문자열): 성공하면 음수가 아닌 값 반환, 실패하면 EOF(-1) 반환.
*/

// #include <stdio.h>
// int main()
// {
// 	char buffer[100];
// 	gets_s(buffer, sizeof(buffer)); // 내 환경(gcc)에서는 아예 되지도 않네..?
// 	puts(buffer);
// }

/*
fgetc(파일포인터): 성공하면 읽은 문자를 반환, 실패하면 -1 반환.
fputc(문자, 파일포인터): 성공하면 쓴 문자를 반환, 실패하면 -1 반환.
파일포인터를 또 모르잖아... 늪이네.
*/

#include <stdio.h>
int main()
{
	char buffer[100] = {0,};
	int c1 = 0;
	FILE *fp = fopen("hello.txt", "w+");
	for (int i = 0; i < 10; i++)
		fputc('a', fp);
	rewind(fp);
	while (1)
	{
		c1 = fgetc(fp);
		if (feof(fp))
			break;
		putchar(c1);
	}
	fclose(fp);
}

/*
내용 전혀... 모르겠고 파일 포언티도 처음 보긴하지만...
뭔가 rush02나 bsq에서 봤던 open, read가 생각나네...
*/