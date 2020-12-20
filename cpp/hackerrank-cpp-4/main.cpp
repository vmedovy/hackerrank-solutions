/*
 * HackerRank - C++ skill
 * Title: Conditional Statements
 * Link:  https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
 */

#include <iostream>
#include <array>
#include <string>


int main() {
    int n;
    std::cin >> n;

    std::array<std::string, 10> responses{
            {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"}
    };
    if (n >= 1 && n <= 9)
        std::cout << responses[n - 1];
    else
        std::cout << responses.back();

    return 0;
}
