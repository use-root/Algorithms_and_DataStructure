#include <iostream>
using namespace std;

/* Analyze
 * Time: O(n) and Space: O(n)
 */

int sum_array(int array[], int size) {
  int sum = 0; // ---> 1
  for (int i = 0; i < size; i++) {
    // ---> depend of the size, and the numbre of the size is 'n' + 1
    sum = sum + array[i]; // --> n
  }
  return sum; // ---> 1
              // f(n) = 2n + 3

  int main() {
    int array[5] = {8, 3, 9, 7, 2}; // --> 1
    // -->  2n + 3
    cout << sum_array(array, sizeof(array) / sizeof(array[0])) << "\n";
    return 0; // --> 1
              // f(n) = 2n + 5
  }
