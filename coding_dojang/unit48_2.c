// <typedef로 struct 키워드 없이 구조체 선언.>

#include <stdio.h>
#include <string.h>

typedef struct _Person
{
	char name[20];
	int age;
	char address[100];
} Person; // 구조체 별칭

int main()
{
	Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);
}


// <cf) typedef>

/*
typedef int MYINT;
typedef int* PMYINT;

MYINT num1;
PMYINT numPtr1;

numPtr = &num1;
*/

// <cf) 구조체 태그>

/*
struct나 typedef struct 다음에 붙이는 이름에는 앞에 _를 붙이는 것이 관례였음.
*/