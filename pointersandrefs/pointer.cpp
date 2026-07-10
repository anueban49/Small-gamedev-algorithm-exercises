#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int* p = &a;
    std::cout << *p << "\n";
    p = &b;
    std::cout << *p << "\n";
    *p = 999;
    std::cout << a << " " << b << " " << "\n";
    return 0;
}