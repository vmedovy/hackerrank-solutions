/*
 * HackerRank - C++ skill
 * Title: Functions
 * Link:  https://www.hackerrank.com/challenges/c-tutorial-functions
 */

#include <iostream>
#include <algorithm>

int max_of_four(int a, int b, int c, int d) {
    return std::max(a, std::max(b, std::max(c, d)));
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << max_of_four(a, b, c, d);

    return 0;
}