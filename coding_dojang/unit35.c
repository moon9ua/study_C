// 35. 메모리 사용하기 (https://dojang.io/mod/page/view.php?id=284)

/*
malloc: 성공하면 메모리 주소 반환, 실패하면 null 반환.
*/

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int num1 = 20;
// 	int *numPtr1;

// 	numPtr1 = &num1;

// 	int *numPtr2;

// 	numPtr2 = malloc(sizeof(int));

// 	printf("%p %d\n", numPtr1, *numPtr1);
// 	printf("%p %d\n", numPtr2, *numPtr2);

// 	free(numPtr2);
// }

/*
원하는 시점에 원하는 만큼 메모리를 할당할 수 있어서, 동적 메모리 할당(dinamic memory allocation).
numPtr1은 일반 변수의 메모리 주소를 할당, numPtr2는 malloc 함수로 메모리를 할당.
변수는 스택에 생성, malloc 함수는 힙 부분의 메모리를 사용.
스택의 메모리는 따로 처리하지 않아도 되지만, 힙의 메모리는 해제해야 함.
메모리를 해제하지 않으면 운영체제가 프로그램을 강제로 종료시키거나 메모리 할당에 실패하게 됨.
메모리 누수(memory leak) 조심할 것.
*/

// 메모리에 값 저장하기

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int *numPtr;
// 	numPtr = malloc(sizeof(int));
// 	*numPtr = 10;
// 	printf("%d\n", *numPtr);
// 	free(numPtr);
// }

// 메모리 내용을 한꺼번에 설정하기

/*
여기서 막혔다. 처음 보는 내용임...
나중에 다시 보자.
*/

// 널 포인터 사용하기

/*
나중에 다시보자.
*/