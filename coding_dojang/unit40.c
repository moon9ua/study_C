// 40. 입력 값을 문자열에 저장하기 (https://dojang.io/mod/page/view.php?id=336)

/*
scanf("%s", 배열): 성공하면 가져온 값의 개수를 반환, 실패하면 EOF(-1)를 반환.
*/

// #include <stdio.h>
// int main()
// {
// 	char s1[10]; // 입력받는 글자수가 9개까지만 가능.
// 	scanf("%s", s1); // 공백 직전까지만 저장됨.
// 	printf("%s\n", s1); // hi hello 입력하면 hi만 출력.
// }

// #include <stdio.h>
// int main()
// {
// 	char s1[30];
// 	scanf("%[^\n]s", s1);
// 	printf("%s\n", s1);
// }

/*
EOF: 파일의 끝. -1. 윈도우는 컨트롤 z, 리눅스는 컨트롤 d.
stdio.h 헤더에 정의. 보통 파일 처리 함수가 실패하면 반환됨.
*/

// #include <stdio.h>
// int main()
// {
// 	char *s1 = "hello";
// 	scanf("%s", s1);
// 	printf("%s", s1);
// } // 에러.

/*
포인터는 읽기만 가능하고 쓰기가 불가능하기 때문. scanf 함수에서 사용 불가.
뭔소린지 아직 잘 모르겠음. (https://dojang.io/mod/page/view.php?id=337)
하지만 해결방법(malloc)은 겪어봄. 아래 코드처럼 하면 됨.
*/

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *s1 = malloc(sizeof(char)*10);
// 	scanf("%s", s1);
// 	printf("%s\n", s1);
// 	free(s1);
// }

#include <stdio.h>
int main()
{
	char s1[10];
	char s2[10];
	scanf("%s %s", s1, s2);
	printf("%s\n%s\n", s1, s2);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[10];
// 	char s2[10];
// 	scanf("%[^\n]s %[^\n]s", s1, s2); // 이건 안되네... 어렵다.
// 	printf("%s\n%s\n", s1, s2);
// }