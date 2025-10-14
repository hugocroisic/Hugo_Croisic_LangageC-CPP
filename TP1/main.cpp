#include <iostream>

void exchange(int& a, int& b) {
    int tmp = a;
    std::cout << "Valeur de a: " << a <<"\n";
    std::cout << "Valeur de b: " << b <<"\n";
    a = b;
    b = tmp;
    std::cout << "Valeur de a: " << a <<"\n";
    std::cout << "Valeur de b: " << b <<"\n";
}

