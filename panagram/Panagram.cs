using System;

namespace OSS
{
    class Panagram
    {
        static void Main(string[] args)
        {
            Console.WriteLine(IfPanagram("The quick brown fox jumps over the lazy dog"));
            Console.ReadLine();
        }

        static bool IfPanagram(string str)
        {
            str = str.ToUpper();
            bool[] alpha = new bool[26];
            for (int i = 0; i < str.Length; i++)
            {
                int index = str[i] - 'A';
                if (index >= 0 && index < 26)
                {
                    alpha[index] = true;
                }
            }

            for (int i = 0; i < alpha.Length; i++)
            {
                if (!alpha[i])
                    return false;
            }

            return true;
        }
    }
}
