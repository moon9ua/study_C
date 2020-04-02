#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp; // 오답: *tmp로 선언.

    tmp = *b;
    *b = *a;
    *a = tmp;
}

int main()
{
    int x;
    int y;
    int a;
    int b;

    scanf("%d %d", &a, &b);
    if (a < b)
        swap(&a, &b);
    x = a;
    y = b;
    while (a % b != 0)
    {
        a = a % b;
        swap(&a, &b);
    }
    printf("%d\n", b);
    printf("%d\n", (x / b) * (y / b) * b);
}

// 유클리드 호제법? 혼자는 절대 생각 못할 듯.