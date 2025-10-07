#include <iostream>
#include "hello.hpp"

std::string greet(const std::string& name) { return "Hello, " + name + "!"; }

int main() {
    std::cout << greet("World") << std::endl;
    return 0;
}
