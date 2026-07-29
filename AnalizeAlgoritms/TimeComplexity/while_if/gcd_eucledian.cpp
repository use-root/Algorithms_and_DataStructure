#include <iostream>

int gcd(int a, int b) {
  if (a == 0)
    return b; // O(1)

  if (b == 0)
    return a; // O(1)

  if (a == b)
    return a; // O(1)

  if (a > b)
    return gcd(a - b,
               b); // T(n) = gcd(a,b); n=max(a,b); k=min(a,b); gcd(n-k) + O(1)
  return gcd(a, b - a);

  // Time: O(n)
}

int main() {
  int a = 12, b = 16;
  std::cout << gcd(a, b) << "\n";
  return 0;
}
