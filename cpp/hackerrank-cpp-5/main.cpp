/*
 * HackerRank - C++ skill
 * Title: For Loop
 * Link:  https://www.hackerrank.com/challenges/c-tutorial-for-loop
 */

#include <iostream>
#include <array>
#include <string>

int main() {
    int start, end;
    std::cin >> start >> end;

    std::array<std::string, 9> responses{
            {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}
    };

    for (int i = start; i <= end; ++i) {
        if (i >= 1 && i <= 9)
            std::cout << responses[i - 1];
        else if (i % 2 == 0)
            std::cout << "even";
        else
            std::cout << "odd";
        std::cout << '\n';
    }

    return 0;
}
