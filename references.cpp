#include <iostream>

void increment(int& x) {
    x = x + 1;
}

int main() {
    int a = 10;
    int& r = a;

    r = 20;
    std::cout << a << " " << r << "\n";

    increment(a);
    std::cout << a << "\n";

    increment(r);
    std::cout << r << "\n";

    int b = 100;
    r = b;
    std::cout << a << " " << b << " " << r << "\n";

    return 0;
}