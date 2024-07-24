#include "calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a + b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

double Calculator::divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        throw std::invalid_argument("Division by zero");
    }
}
