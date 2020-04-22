#include <iostream>

#include "src/leftmost_column_with_at_least_a_one.hpp"

int main(int argc, char* argv[]) {
    std::cout << "== Leftmost Column with at Least a One === " << std::endl;
    auto test_input = LeftmostColumnWithAtLeaseAOne::getTestInput();
    auto test_output = LeftmostColumnWithAtLeaseAOne::Solution().leftMostColumnWithOne(test_input);
    LeftmostColumnWithAtLeaseAOne::printOutput(test_output);
    std::cout << "== == == " << std::endl;
}
