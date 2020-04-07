using System;
using System.Diagnostics;

namespace _30_day_challenge
{
    class Program
    {
        static void Main(string[] args)
        {
            // Group anagrams
            Console.WriteLine("== Group Anagrams == ");
            var group_anagrams = new GroupAnagrams.Solution();
            group_anagrams.PrintOutput(group_anagrams.GroupAnagrams(group_anagrams.GetTestInput()));
            Console.WriteLine("== == == ");
        }
    }
}
