// 74. 연결리스트 구현하기 (https://dojang.io/mod/page/view.php?id=644)

// 연결리스트 구조체 만들고 사용하기

struct NODE
{
	struct NODE *next;
	int data;
};

#include <stdio.h>
#include <stdlib.h> // malloc, free
int main()
{
	struct NODE *head = malloc(sizeof(struct NODE)); // head 노드는 데이터를 저장하지 않는다.

	struct NODE *node1 = malloc(sizeof(struct NODE));
	head->next = node1;
	node1->data = 10;

	struct NODE *node2 = malloc(sizeof(struct NODE));
	node1->next = node2;
	node2->data = 20;

	node2->next = NULL;

	struct NODE *curr = head->next; // 연결리스트 순회용 포인터
	while (curr != NULL)
	{
		printf("%d\n", curr->data); // 이 화살표(?)를 잘 모르네 내가.
		curr = curr->next;
	}

	free(node2);
	free(node1);
	free(head);

	return 0;
}