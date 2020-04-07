using System;
using System.Collections.Generic;

namespace GroupAnagrams {
    public class Solution {
        public IList<IList<string>> GroupAnagrams(string[] strs) {
            var letters_to_word = new Dictionary<string, List<string>>();
            foreach (string word in strs) {
                var letters = new List<char>();
                foreach (char letter in word) {
                    letters.Add(letter);
                }
                letters.Sort();
                string letters_word = string.Join("", letters);
                if(!letters_to_word.ContainsKey(letters_word)) {
                    letters_to_word.Add(letters_word, new List<string>(){word});   
                } else {
                    letters_to_word[letters_word].Add(word);
                }
            }
            var output = new List<IList<string>>();
            foreach (var words in letters_to_word.Values) {
                output.Add(words);
            }
            return output;
        }

        public string[] GetTestInput() {
            return new[]{"eat", "tea", "tan", "ate", "nat", "bat"};
        }

        public void PrintOutput(IList<IList<string>> output) {
            foreach (var words in output) {
                Console.WriteLine(string.Join(" ", words));
            }
        }
    }
}