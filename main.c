//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include "node.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  struct node a, b, *head;
  a.value = 5;
  a.next = &b;
  head = &a;
  b.value = head->value + 3;

  /*
  printf("%d\n", head->value);       // what value for 5
  printf("%d\n", head->next->value); // what value for 8
  printf("%d\n", head->next->next->value);
  printf("%d\n", head->next->next->next->value);
  */

  /*  Exercise I
      1. Add 1 more than at the end
      2. Add value(11)
      3. Make next become NULL
   */
  struct node d;
  b.next = &d;
  d.value = 11;
  d.next = NULL;
  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)
  */

  struct node e;
  head = &e;
  e.value = 2;
  e.next = &a;

  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate

  /*  Exercise III Use loop to print everything
      int i,n=5;
      for(i=0;i<n;i++){
          printf("%3d", tmp->value);
        // What is missing???
      }
  */

  int i, n = 4;
  printf("For Loop\n");
  for (i = 0; i < n; i++) {
    printf("%3d\n", tmp->value);
    tmp = tmp->next;
  }

  /*  Exercise IV change to while loop!! (you can use NULL to help)

       while(){
          printf("%3d", tmp->value);
         // What is missing???
      }
  */

  printf("While Loop\n");
  tmp = head;
  while (tmp != NULL) {
    printf("%3d\n", tmp->value);
    tmp = tmp->next;
  }

  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help
      */
  printf("Exercise 5");

  head = NULL;
  NodePtr temp = NULL;

  int node = 3;
  for (int i = 0; i < node; i++) {
    NodePtr newNode = (NodePtr)malloc(sizeof(struct node));
    newNode->value = i + 1;
    newNode->next = NULL;
    if (head == NULL) {
      head = newNode;
      temp = newNode;
    } else {

      temp->next = newNode;
      temp = newNode;
    }
  }

  temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp->value);
    temp = temp->next;
  }
  printf("NULL\n");
  /*  Exercise VI Free all node !!
       //use a loop to help

   */

  printf("Free Memory \n");
  temp = head;
  while (temp != NULL) {
    NodePtr nextNode = temp->next;
    free(temp);
    temp = nextNode;
  }

  head = NULL;
  return 0;
}
