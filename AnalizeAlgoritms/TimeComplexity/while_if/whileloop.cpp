#include <iostream>

int main() {
  int i = 1;
  int k = 1;
  int n = 20;
  while (k < n) {
    std::cout << "K:" << k << " i:" << i << "\n";
    k = k + i; // 1=m(m+1)/2
    i++;
  }
  // Time : O(root(n))
  return 0;
}
