#include <iostream>

int main() {

    unsigned long long p;
    std::cin >> p;

    while (p != -1) {
        if (p > 0) p--;
        std::cout << p << std::endl;

        std::cin >> p;
    }

    return 0;
}