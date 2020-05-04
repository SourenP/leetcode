# leetcode

My solutions to leetcode problems

## 30-Day LeetCoding Challenge: April 2020

[Link to challenge](https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/)

Solving problems in C, C++ and C# for practice.

### Run
```bash
cd 30_day_challenge/

// C#
cd solutions_c#
dotnet run

// C++
cd solutions_cpp
make clean && make main && ./main

// C
cd solutions_c
make clean && make main && ./main
```

### Problems

Week 1: April 1st–April 7th
- [ ] Single Number
- [ ] Happy Number
- [ ] Maximum Subarray
- [ ] Move Zeroes
- [X] [Group Anagrams](https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/528/week-1/3288/)
  - Solved: [solution](30_day_challenge/solutions_c%23/src/group_anagrams.cs)
    - Hints: None
  - Language: C#

Week 2: April 8th-April 21st
- [ ] Middle of Linked List
- [ ] Backspace String Compare
- [ ] Min Stack
- [ ] Diameter of Binary Tree
- [ ] Last Stone Weight
- [ ] Contiguous Array
- [ ] Perform String Shifts

Week 3
- [ ] Product of Array Except Self
- [ ] Valid Parenthesis String
- [ ] Number of Islands
- [ ] Minimum Path Sum
- [ ] Search in Rotated Sorted Array
- [ ] Construct Binary Search Tree from Preorder Traversal
- [X] [Leftmost Column with at Least a One](https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/530/week-3/3306/)
  - Solved: [solution](30_day_challenge/solutions_cpp/src/leftmost_column_with_at_least_a_one.hpp)
    - Hints: #1
  - Language: C++

Week 4
- [X] [Subarray Sum Equals K](https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3307/)
  - Solved: [solution](30_day_challenge/solutions_c/src/subarray_sum_equals_k.c)
    - Hints: None
  - Language: C
- [X] [Bitwise AND of Numbers Range]((https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3308/))
  - Failed
- [X] [LRU Cache]((https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3309/))
  - Failed
- [X] [Jumping Game]((https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3310/))
  - Paritally solved: [solution](30_day_challenge/solutions_cpp/src/jump_game.hpp)
    - 74 / 75 test cases passed (Status: Time Limit Exceeded)
    - Mistake was not starting from the back of the list as an optimization
  - Language: C++