#include <iostream>
#include <string>

bool hasMonotoneIncreasingDigits(int number) {
    std::string digits = std::to_string(number);
    int n = digits.length();

    for (int i = 0; i < n - 1; i++) {
        if (digits[i] > digits[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int num1 = 12345;
    int num2 = 10;

    if (hasMonotoneIncreasingDigits(num1)) {
        std::cout << num1 << " has monotone increasing digits." << std::endl;
    } else {
        std::cout << num1 << " does not have monotone increasing digits." << std::endl;
    }

    if (hasMonotoneIncreasingDigits(num2)) {
        std::cout << num2 << " has monotone increasing digits." << std::endl;
    } else {
        std::cout << num2 << " does not have monotone increasing digits." << std::endl;
    }

    return 0;
}
