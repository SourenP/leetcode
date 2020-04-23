#include <iostream>

#include "src/leftmost_column_with_at_least_a_one.hpp"
#include "src/bitwise_and_of_numbers_range.hpp"

int main(int argc, char* argv[]) {
    std::cout << "== Leftmost Column with at Least a One === " << std::endl;
    auto input_1 = LeftmostColumnWithAtLeaseAOne::getTestInput();
    auto output_1 = LeftmostColumnWithAtLeaseAOne::Solution().leftMostColumnWithOne(input_1);
    LeftmostColumnWithAtLeaseAOne::printOutput(output_1);
    std::cout << "== == == " << std::endl;
    std::cout << "== Leftmost Column with at Least a One === " << std::endl;
    auto output_2 = BitwiseAndOfNumbersRange::Solution().rangeBitwiseAnd(5,3);
    BitwiseAndOfNumbersRange::printOutput(output_2);
    std::cout << "== == == " << std::endl;
}
