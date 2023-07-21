#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cin >> password;
    bool is_valid = true;
    int is_upper = 0, is_lower = 0,
    is_digit = 0, is_other = 0;

    // length check
    if (password.length() < 8 || password.length() > 14) {
        is_valid = false;
    }

    // ASCII check + character diversity
    for (char c : password) {
        if (c >= 33 && c <= 126) {
            if (isupper(c)) {
                is_upper = 1;
            } else if (islower(c)) {
                is_lower = 1;
            } else if (isdigit(c)) {
                is_digit = 1;
            } else is_other = 1;
        } else {
            is_valid = false;
        }
    }

    if (is_upper + is_lower +
    is_digit + is_other < 3) {
        is_valid = false;
    }

    // final checks
    if (is_valid) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}