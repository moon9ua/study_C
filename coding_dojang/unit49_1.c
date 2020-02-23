// 49. 구조체 포인터 사용하기 (https://dojang.io/mod/page/view.php?id=418)
/*
구조체는 멤버 변수가 여러개 들어있어 크기가 큰 편.
따라서 구조체 변수를 일일이 선언하는 것보다,
포인터에 메모리를 할당해서 사용하는 편이 효율적. (이해X)
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person *p1 = malloc(sizeof(struct Person));
	strcpy(p1->name, "홍길동"); // -> 는 화살표 연산자라고 한다.
	p1->age=30;
	strcpy(p1->address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1->name);
	printf("나이: %d\n", p1->age);
	printf("주소 %s\n", p1->address);

	free(p1);
	return 0;
}
*/

/*
p1->age; // 화살표 연산자로 멤버에 접근.
(*p1).age; // 구조체 포인터를 역참조한 뒤 .으로 멤버에 접근.
*/

// 구조체의 멤버가 포인터일 때 역참조하기.

#include <stdio.h>
#include <stdlib.h>

struct Data
{
	char c1;
	int *numPtr;
};

int main()
{
	int num1 = 10;
	struct Data d1;
	struct Data *d2 = malloc(sizeof(struct Data));

	d1.numPtr = &num1;
	d2->numPtr = &num1;

	printf("%d\n", *d1.numPtr);
	printf("%d\n", *d2->numPtr);

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1); // d2->c1과 같음.

	printf("%d\n", *(*d2).numPtr); // *d2->numPtr과 같음. 이라는데 둘다 몰라 ㅠㅠㅠ

	free(d2);
	return 0;
}