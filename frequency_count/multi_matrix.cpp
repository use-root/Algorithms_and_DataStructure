#include <iostream>
using namespace std;
/* Analize
 * Time: O(n^3)
 * Space : O(n^2)
 * */
matrix_c[i][u] = matrix_a[i][u] + matrix_b[i][u];

int (*add(int matrix_a[][3], int matrix_b[][3]))[3] {
  static int matrix_c[3][3];

  for (int i = 0; i < 3; i++) {     // n+1
    for (int u = 0; u < 3; u++) {   // n*(n+1) = n^2 + n
      matrix_c[i][u] = 0;           // n*n = n^2
      for (int j = 0; j < 3; j++) { // n*n*(n+1) = n^3 + n^2
        matrix_c[i][u] =
            matrix_c[i][u] * matrix_a[i][j] + matrix_b[j][u]; // n*n*n = n^3
      }
    }
  }
  // f(n): 2n^3+3n^2+2n+1 ; O(n^3)
  return matrix_c;
}

int main() {
  int matrix_a[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
  int matrix_b[3][3] = {{89, 2, -3}, {15, 32, 31}, {10, -32, 9}};
  int (*matrix_c)[3] = add(matrix_a, matrix_b);
  for (int i = 0; i < 3; i++) {
    for (int u = 0; u < 3; u++) {
      cout << matrix_c[i][u] << " ";
    }
    cout << "\n";
  }
  return 0;
}
