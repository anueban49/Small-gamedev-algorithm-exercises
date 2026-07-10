#include <iostream>

void increment(int &x) { x = x + 1; }

int main() {
  int a = 10;
  int &r = a;

  r = 20;
  std::cout << a << " " << r << "\n";
  // printed out 20 20
  increment(a);
  std::cout << a << "\n";
  // printed out 21
  increment(r);
  std::cout << r << "\n";
  // printed out 22
  int b = 100;
  r = b;
  std::cout << a << " " << b << " " << r << "\n";
  // printed out 100 100 100
  return 0;
}