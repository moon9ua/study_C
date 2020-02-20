// <시도하다가 포기>
// 일단 내가 (문자열의) reverse 문제를 아직 잘 못함. (final exam에서도 헤매다가 어쩌다가 패스함)
// 그리고 scanf를 아직 잘 모르겠음.
// 따라서 https://dojang.io/mod/page/view.php?id=82 등의 공부 필요.

// #include <stdio.h>

// int main()
// {
// 	char a[4]; // 3인가..4인가..
// 	char b[4];

// 	scanf("%s %s", a, b); // 띄어쓰기를 기준으로 했었나? 그랬던것같은데.
// 	printf("%s %s", a, b);
// }



// <OK code>
#include <stdio.h>

int main()
{
	int a;
	int b;

	scanf("%d %d", &a, &b);
	
	int rev_a;
	int rev_b;

	rev_a = a/100 + ((a%100)/10)*10 + ((a%100)%10)*100;
	rev_b = b/100 + ((b%100)/10)*10 + ((b%100)%10)*100;
	// 너무 더럽나... 머리로 직접 계산한 수식이라 TT

	if (rev_a > rev_b)
		printf("%d\n", rev_a);
	else
		printf("%d\n", rev_b);
}
