#include <stdio.h>
#include "tests.h"
#include "genericLinkedList.h"

void runTests(){
	printf("Tests running...\n");
	genericlistElement* l = createEl("Initial test", 30, printStr);
	//Test for create and traverse
	traverse(l);
	printf("\n");

	//Test for insert after
	int num = 123;
	insertAfter(l, &num, sizeof(int), &printInt);
	traverse(l);
	printf("\n");

	// Test for delete after
	deleteAfter(l);
	traverse(l);
	printf("\n");

	//Test for push
	char a = 'a';
	push(&l, &a, sizeof(char), &printChar);
	traverse(l);
	printf("\n");

	//Test for length
	printf("%d\n\n", length(l));

	//Test for pop
	pop(&l);
	traverse(l);
	printf("\n");

	//Test for enqueue
	float i = 22.8;
	enqueue(&l, &i, sizeof(float), &printFloat);
	traverse(l);
	printf("\n");

	//Test for dequeue
	dequeue(l);
	traverse(l);
	printf("\n");

	printf("\nTests complete.\n");
}
