using System.Collections.Generic;

namespace GroupAnagrams {
    public class Solution {
        public IList<IList<string>> GroupAnagrams(string[] strs) {
            return null; // unsolved
        }

        public string[] GetTestInput() {
            return new[]{"eat", "tea", "tan", "ate", "nat", "bat"};
        }

        public IList<IList<string>> GetTestOutput() {
            IList<IList<string>> output = new List<IList<string>>();
            output.Add(new List<string>(){"ate", "eat", "tea"});
            output.Add(new List<string>(){"nat", "tan"});
            output.Add(new List<string>(){"bat"});
            return output;
        }
    }
}