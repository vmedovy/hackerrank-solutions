/*
 * HackerRank - C++ skill
 * Title: Variable Sized Arrays
 * Link:  https://www.hackerrank.com/challenges/variable-sized-arrays
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    int array_count, query_count;
    std::cin >> array_count >> query_count;
    std::cin.ignore(1); // ignore trailing newline char

    std::vector<std::vector<int>> arrays;

    for (int i = 0; i < array_count; ++i) {
        size_t number_of_values;
        std::cin >> number_of_values;
        arrays.emplace_back(std::vector<int>(number_of_values));
        std::string line;
        std::getline(std::cin, line);
        std::istringstream iss{line};

        for (size_t j = 0; j < number_of_values; ++j) {
            int val;
            iss >> val;
            arrays[i][j] = val;
        }
    }

    for (auto ctr = 0; ctr < query_count; ++ctr) {
        int i, j;
        std::cin >> i >> j;
        std::cout << arrays[i][j] << '\n';
    }

    return 0;
}
