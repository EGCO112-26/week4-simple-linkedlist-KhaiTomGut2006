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

  struct node d;
  b.next = &d;
  d.value = 11;
  d.next = NULL;

  struct node e;
  head = &e;
  e.value = 2;
  e.next = &a;

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

  /*  Exercise II
          1. Add 1 more than at the begining!!!!
          2. Add value (2)

  */
  typedef struct node *NodePtr;
  NodePtr tmp = head; // add temp value to faciliate

  int i, n = 4;
  printf("For Loop\n");
  for (i = 0; i < n; i++) {
    printf("%3d\n", tmp->value);
    tmp = tmp->next;
  }
  printf("While Loop\n");
  tmp = head;
  while (tmp != NULL) {
    printf("%3d\n", tmp->value);
    tmp = tmp->next;
  }

  /*  Exercise III Use loop to print everything
      int i,n=5;
      for(i=0;i<n;i++){
          printf("%3d", tmp->value);
        // What is missing???
      }
  */

  /*  Exercise IV change to while loop!! (you can use NULL to help)

        while(){
           printf("%3d", tmp->value);
          // What is missing???
       }
   */

  /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
          //use a loop to help

      */

  /*  Exercise VI Free all node !!
       //use a loop to help

   */

  return 0;
}
