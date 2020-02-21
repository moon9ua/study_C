// https://www.acmicpc.net/problem/11720

// <OK code>
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int i = 0;
	int num = 0;
	int sum = 0;
	while (i < n) // for문도 연습해야하는데.. while에 익숙해져서..
	{
		scanf("%1d", &num); // 1d로 한글자씩.
		sum = sum + num;
		i++;
	}
	printf("%d\n", sum);
}