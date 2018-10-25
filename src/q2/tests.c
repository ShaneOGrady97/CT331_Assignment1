#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("Test String (1).", 30);
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  traverse(l);
  printf("\n");

  //Test insert after
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  // Test delete after
  deleteAfter(l);
  traverse(l);
  printf("\n");

  //Test length
  int num = length(l2);
  printf("%d\n\n", num);

  //Test enqueue
  enqueue(&l, "a final last string (4)", 30);
  traverse(l);
  printf("\n");

  //Test pop
  pop(&l);
  traverse(l);
  printf("\n");

  //Test push
  push(&l, "a final last string (4)", 30);
  traverse(l);
  printf("\n");

  //Test dequeue
  dequeue(l);
  traverse(l);
  printf("\nTests complete.\n");
}
