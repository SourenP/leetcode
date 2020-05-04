#include <iostream>
#include <stack>
#include <unordered_set>
#include <vector>

namespace JumpGame {
    class Solution {
      public:
        bool canJump(std::vector<int>& nums) {
            m_toVisit.push(0);
            while (!m_toVisit.empty()) {
                int index = m_toVisit.top();

                if (index == nums.size() - 1) {
                    return true;
                }

                m_visited.insert(index);
                m_toVisit.pop();

                int num = nums[index];

                for (size_t i = 1; i <= num; i++) {
                    int jump_index = index + i;
                    if (jump_index < nums.size() && m_visited.count(jump_index) == 0) {
                        m_toVisit.push(jump_index);
                    }
                }
            }
            return false;
        }

      private:
        std::unordered_set<int> m_visited;
        std::stack<int> m_toVisit;
    };

    bool testSolution() {
        std::vector<int> nums = {2, 3, 1, 1, 4};
        bool output = Solution().canJump(nums);
        bool expected_output = true;
        return output == expected_output;
    }

} // namespace JumpGame