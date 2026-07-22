#include <iostream>
using namespace std;

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a, b;
  cout << "Enter 2 numbers\n";
  cin >> a >> b;
  swap(a, b);
  cout << b << "  " << a << "\n";
  return 0;
}
