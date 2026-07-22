#include <iostream>
using namespace std;

int (*add(int matrix_a[][3], int matrix_b[][3]))[3] {
  static int matrix_c[3][3];

  for (int i = 0; i < 3; i++) {
    for (int u = 0; u < 3; u++) {
      matrix_c[i][u] = matrix_a[i][u] + matrix_b[i][u];
    }
  }
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
