// #include <stdio.h>

// int main()
// {
// 	unsigned long long a, b;
// 	scanf("%lld %lld", &a, &b);
// 	printf("%lld\n", a+b);
// }

// 이게 최대 자료형 아닌가? 안되네...


// #include <stdio.h>

// int main()
// {
// 	char *a;
// 	char *b;

// 	scanf("%s %s", a, b);
// 	printf("%s %s", a, b);
// }

// 이런 식으로 하려다가 b에는 null이 나와서...
// 그냥 a에 다 넣어버리고 나누기로 함.


#include <stdio.h>

int main()
{
	char a[20001]; // *a로 하면 프린트해도 null 나옴... 왜였지?
	scanf("%s", a);
	printf("%s", a);
} // 와 어렵네.