// 49.2 구조체 별칭으로 포인터 선언하고 메모리 할당

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person
{
	char name[20];
	int age;
	char address[100];
} Person; // 구조체 별칭

int main()
{
	Person *p1 = malloc(sizeof(Person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1->name);
	printf("나이: %d\n", p1->age);
	printf("주소: %s\n", p1->address);
	
	free(p1);
	return 0;
}

// 익명 구조체도 마찬가지
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct // 익명구조체
{
	char name[20];
	int age;
	char address[100];
} Person;

int main()
{
	Person *p1 = malloc(sizeof(Person));

	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1->name);
	printf("나이: %d\n", p1->age);
	printf("주소: %s\n", p1->address);

	free(p1);
	return 0;
}
*/