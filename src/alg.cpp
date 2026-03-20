// Copyright 2026 NNTU-CS
#include <iostream>
#include "alg.h"

int gcd(int a, int b) {
    while (b != 0) {
        int vremPerem = b;
        b = a % b;
        a = vremPerem;
    }
    return a;
}

int main() {
    std::cout << "NOD(48, 18) = " << gcd(48, 18) << std::endl;
    return 0;
}
