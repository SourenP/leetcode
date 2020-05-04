#include <iostream>

#include "src/jump_game.hpp"
#include "src/leftmost_column_with_at_least_a_one.hpp"

int main(int argc, char* argv[]) {
    std::cout << "Leftmost Column with at Least a One: "
              << LeftmostColumnWithAtLeaseAOne::testSolution() << std::endl;
    std::cout << "Jump Game: " << JumpGame::testSolution() << std::endl;
}
