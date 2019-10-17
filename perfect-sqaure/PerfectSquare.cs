using System;

namespace OSS
{
    class PerfectSquare
    {
        static void Main(string[] args)
        {
            int n = 36;

            if (IsPerfectSquare(n))
                Console.WriteLine("Yes");
            else
                Console.WriteLine("No");
            Console.ReadLine();
        }        
        static bool IsPerfectSquare(int n)
        {
            for (int i=1; i*i<=n; i++)
            {
                if (n % i == 0 && n / i == i)
                {
                    return true;
                }
            }
            return false;
        }

    }
}
