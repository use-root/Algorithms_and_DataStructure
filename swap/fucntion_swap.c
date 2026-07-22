#include <stdio.h>

/* Time analize:
   Each of the statements takes one time or constant time: f(n) = 9
   Time: O(1) and Space: O(1)
 */
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a, b;                                            // Time statement: 2
  printf("Enter 2 numbers: \n");                       // Time statement: 1
  scanf("%d %d", &a, &b);                              // Time statement: 1
  swap(&a, &b);                                        // Time statement: 1
  printf("Number a = %d and Number b = %d: \n", a, b); // Time statement: 1
  return 0;
}
