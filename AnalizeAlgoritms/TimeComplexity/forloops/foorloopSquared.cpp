#include <iostream>

/* Analyze:
 * Every time that 'i' increase 'p' increase naturally like : 1+2+3+4+5+6+....k
 * times so : k(k+1)/2
 * The condition is 'P>n' we assume that: p = k(k+1)/2 > n
 * k^2>2n-k; k>root(2n-k)
 * Time: O(root(2n-k))
 * */

int main() {

  int p = 0;
  int n = 20;
  for (int i = 1; p <= n; i++) {
    p = p + i;
    std::cout << "I: " << i << "\n";
    std::cout << "P: " << p << "\n";
  }
  return 0;
}
