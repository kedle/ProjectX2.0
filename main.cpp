#include "src/calculator.h"
#include <iostream>
#include <assert.h>

void test() {
    // +
    assert(calculator(5, '+', 3) == 8);
    assert(calculator(10, '+', -5) == 5);

    // -
    assert(calculator(10, '-', 3) == 7);
    assert(calculator(5, '-', 5) == 0);

    // *
    assert(calculator(4, '*', 3) == 12);
    assert(calculator(5, '*', -2) == -10);

    // /
    assert(calculator(10, '/', 2) == 5);
    assert(calculator(9, '/', 3) == 3);

    // zero division
    assert(calculator(5, '/', 0) == 1);

    // invalid operator
    assert(calculator(5, '%', 3) == 1);
}

int main() {
    // Function calls to calculate
    // Write your all possible input scenarios here
    // Notice that calculator code written here works with integers
    test();
    std::cout << "Tests passed" << std::endl;
    return 0;
}
