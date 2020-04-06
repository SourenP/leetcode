using System;
using System.Diagnostics;

namespace _30_day_challenge
{
    class Program
    {
        static void Main(string[] args)
        {
            // Group anagrams
            var group_anagrams = new GroupAnagrams.Solution();
            Debug.Assert(
                group_anagrams.GroupAnagrams(group_anagrams.GetTestInput()) == 
                group_anagrams.GetTestOutput()
            );
        }
    }
}
