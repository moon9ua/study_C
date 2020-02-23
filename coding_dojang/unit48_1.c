// 48. 구조체 사용하기 (https://dojang.io/mod/page/view.php?id=407)
/*
#include <stdio.h>
#include <string.h> // strcpy 쓰려고.

struct Person
{
	char name[20];
	int age;
	char address[100];
}; // 세미콜론을 붙여줘야.

int main()
{
	struct Percon p1;

	strcpy(p1.name, "홍길동"); // 문자열은 =로 바로 할 수 없다는데... 갑자기 헷갈리네.
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1.name);
	printf("나이 %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}
*/

// 구조체를 정의하는 동시에 변수 선언.
/*
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
} p1; // 변수 선언. 사실 전역변수인 상태임.

int main()
{
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1.name);
	printf("나이 %d\n", p1.age);
	printf("주소: %s\n", p1.address);

	return 0;
}
*/

// 구조체 변수를 선언하는 동시에 초기화하기
#include <stdio.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person p1 =
	{.name = "홍길동", .age = 30, .address = "서울시 용산구 한남동"};
	// 바로 넣을때는 strcpy를 안써도 되니까 헷갈림...

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);
}