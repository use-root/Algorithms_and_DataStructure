#include <iostream>

int main() {
  int p = 0;
  int n = 10;
  for (int i = 1; i < 10; i = i * 2) {
    p++;
    std::cout << "P: " << p << "\n"; // -- long(n)
  }

  for (int j = 1; j < p; j = j * 2) {
    std::cout << "J: " << j << "\n"; // -- loglog(p)
  }

  // Time O(loglog(p))
  return 0;
}
