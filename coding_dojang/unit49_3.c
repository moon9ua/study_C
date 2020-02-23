// 49.3 구조체 포인터에 구조체 변수의 주소 할당하기

/*
지금까지 malloc 함수로 구조체 포인터에 동적 메모리 할당.
동적 메모리를 할당하지 않고 구조체 포인터를 사용하는 방법은?
구조체 변수에 &를 사용하면 된다.
*/

#include <stdio.h>
struct Person
{
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person p1;
	struct Person *ptr;

	ptr = &p1;
	ptr->age = 30;
	printf("나이: %d\n", p1.age);
	printf("나이: %d\n", ptr->age);

	return 0;
}