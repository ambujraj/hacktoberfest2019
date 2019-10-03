using System;
using System.Text;

/*
    https://www.hackerrank.com/challenges/caesar-cipher-1/problem
*/
namespace CaesarCipher
{
    class Program
    {
        static void Main(string[] args)
        {
            // Read input string
            string s = Console.ReadLine();

            // Read number of letter shifts to the right
            int k = Convert.ToInt32(Console.ReadLine());

            string solution = Solve(s, k);

            Console.WriteLine(solution);
        }

        static string Solve(string s, int k) {
            var sb = new StringBuilder();
            // Since a big k value would should past the end of the alphabet several times, it takes the remainder.
            k = k % ('z' - 'a' + 1);

            for (int i = 0; i < s.Length; i++) {
                int index = s[i] + k;

                var betweenaandz = s[i] >= 'a' && s[i] <= 'z';
                var betweenAandZ = s[i] >= 'A' && s[i] <= 'Z';

                if (betweenaandz || betweenAandZ) {
                    if (betweenAandZ && index > 'Z') {
                        index = index - 'Z' + 'A' - 1;
                    } else if (betweenaandz && index > 'z') {
                        index = index - 'z' + 'a' - 1;
                    }
                    var charToAdd = (char)index;
                    sb.Append(charToAdd);
                } else {
                    sb.Append(s[i]);
                }
            }

            return sb.ToString();
        }
    }
}
