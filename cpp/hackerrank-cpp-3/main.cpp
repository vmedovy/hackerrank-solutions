/*
 * HackerRank - C++ skill
 * Title: Basic Data Types
 * Link:  https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
 */

#include <cstdio>
#include <iostream>

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    std::cin >> i >> l >> c >> f >> d;
    std::printf("%d\n%ld\n%c\n%.3f\n%.9lf", i, l, c, f, d);

    return 0;
}