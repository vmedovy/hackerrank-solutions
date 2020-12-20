/*
 * HackerRank - C++ skill
 * Title: Pointer
 * Link:  https://www.hackerrank.com/challenges/c-tutorial-pointer
 */

#include <cmath>
#include <iostream>

void update(int *a, int *b) {
    int tmp = *a;
    *a += *b;
    *b = std::abs(tmp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    std::cin >> a >> b;
    update(pa, pb);
    std::cout << a << '\n' << b;

    return 0;
}
