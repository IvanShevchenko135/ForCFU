#include <stdio.h>

struct book {
	int num;
	book *next;
	book *prev;
};

book *first, *last;

void addLeft(int n) {

	book *b = new book;

	b->num = n;
	b->prev = NULL;
	if (first == NULL) {
		first = b;
		last = b;
		b->next = NULL;
	}
	else {
		first->prev = b;
		b->next = first;
		first = b;
	}
	return;
}

void addRight(int n) {

	book *b = new book;

	b->num = n;
	b->next = NULL;
	if (last == NULL) {
		first = b;
		last = b;
		b->prev = NULL;
	}
	else {
		last->next = b;
		b->prev = last;
		last = b;
	}
	return;
}

void removeLeft() {

	book *b = first;

	printf("%d\n", b->num);
	if ((b->next) != NULL) {
		(b->next)->prev = NULL;
		first = b->next;
	}
	delete b;
	return;
}

void removeRight() {

	book *b = last;

	printf("%d\n", b->num);
	if ((b->prev) != NULL) {
		(b->prev)->next = NULL;
		last = b->prev;
	}
	delete b;
	return;
}

int main() {

	int operation = 0;
	first = NULL;
	last = NULL;

	while (scanf("%d", &operation) != EOF) {
		if (operation == 1) {
			int n = 0;
			scanf("%d", &n);
			addLeft(n);
		}
		if (operation == 2) {
			int n = 0;
			scanf("%d", &n);
			addRight(n);
		}
		if (operation == 3) removeLeft();
		if (operation == 4) removeRight();
	}
	//system("pause");
	return 0;
}