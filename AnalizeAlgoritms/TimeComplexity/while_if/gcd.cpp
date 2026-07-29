#include <iostream>
int main() {
  int n = 12;
  int m = 18;
  while (m != n) {
    if (m > n) {
      m = m - n;
    } else {
      n = n - m;
    }
  }

  std::cout << m << "\n";
  return 0;
}

// Maximun time O(n)
// Minimun time O(1)
