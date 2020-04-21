#include <cmath>
#include <vector>

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class BinaryMatrix {
  public:
    BinaryMatrix(std::vector<std::vector<int>> values) {
        matrix = values;
    };

    // row x, col y
    int get(int x, int y) {
        return matrix[x][y];
    };

    // row x col
    std::vector<int> dimensions() {
        return {static_cast<int>(matrix.size()), static_cast<int>(matrix[0].size())};
    };

  private:
    std::vector<std::vector<int>> matrix;
};

namespace LeftmostColumnWithAtLeaseAOne {
    class Solution {
      public:
        int leftMostColumnWithOne(BinaryMatrix& binaryMatrix) {
            std::vector<int> dim = binaryMatrix.dimensions();
            int min_c = -1;
            for (size_t r = 0; r < dim[0]; r++) {
                if (min_c == -1) {
                    min_c = findOneInRange(binaryMatrix, r, 0, dim[1] - 1);
                    continue;
                }
                int new_c = findOneInRange(binaryMatrix, r, 0, min_c);
                if (new_c != -1) {
                    min_c = new_c;
                }
            }
            return min_c;
        }

        int findOneInRange(BinaryMatrix& binaryMatrix, size_t row, size_t start, size_t end) {
            int diff = end - start;
            if (diff == 0) {
                return binaryMatrix.get(row, start) ? start : -1;
            }
            if (diff == 1) {
                if (binaryMatrix.get(row, start) == 1) {
                    return start;
                }
                if (binaryMatrix.get(row, end) == 1) {
                    return end;
                }
                return -1;
            }
            int mid = std::floor((start + end) / 2);
            if (binaryMatrix.get(row, mid) == 1) {
                return findOneInRange(binaryMatrix, row, start, mid);
            } else {
                return findOneInRange(binaryMatrix, row, mid, end);
            }
        }
    };

    BinaryMatrix getTestInput() {
        return BinaryMatrix({{0, 0, 0, 0, 1, 1},
                             {0, 0, 0, 1, 1, 1},
                             {0, 0, 0, 0, 1, 1},
                             {0, 0, 0, 0, 1, 1},
                             {0, 0, 0, 1, 1, 1},
                             {0, 0, 0, 1, 1, 1}});
    }

    void printOutput(int output) {
        std::cout << output << std::endl;
    }
}; // namespace LeftmostColumnWithAtLeaseAOne