#include <iostream>
using namespace std;

/* Analyze:
 * "i<n" What that's mean? that the loop goint to repeat n+1 times,
 * because when we get i=10, the loop will compere 10<10 and no. and stop in n+1
 * comparations.
 * Although the statement will be print only n times.
 * */

int main() {
  int n = 10;
  for (int i = 0; i < n; i++) {
    cout << i << "\n"; // --- n
  }
  return 0;
}

// Time will be: O(n)
// Space will be: O(1)
