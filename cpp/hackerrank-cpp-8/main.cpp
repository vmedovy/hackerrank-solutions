/*
 * HackerRank - C++ skill
 * Title: Arrays Introduction
 * Link:  https://www.hackerrank.com/challenges/arrays-introduction
 */

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int numbers[n];
    for (auto &item : numbers) {
        std::cin >> item;
    }

    for (auto i = n - 1; i >= 0; --i) {
        std::cout << numbers[i] << ' ';
    }

    return 0;
}
