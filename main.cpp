#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "Add: " << calc.Add(2.0, 3.0) << std::endl;
    std::cout << "Sub: " << calc.Sub(5.0, 2.0) << std::endl;
    std::cout << "Mul: " << calc.Mul(4.0, 3.0) << std::endl;
    std::cout << "Div: " << calc.Div(10.0, 2.0) << std::endl;

    return 0;
}
