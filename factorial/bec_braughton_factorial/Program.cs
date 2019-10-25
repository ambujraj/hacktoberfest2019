//  Author: Bec Braughton
//  Language: Python 2.7.12
//  Github: https://github.com/beckton

//https://github.com/ambujraj/hacktoberfest2019
//Find the factorial of a number.

using System;

namespace bec_braughton_factorial
{
    class Program
    {
        static void Main(string[] args)
        {
            string userInput;
            int userNum;

            Console.WriteLine("Welcome to beckton's Factorial Finder Program!\n\nPlease enter a number between 2 and 21: ");
            userInput = Console.ReadLine();
            userNum = Convert.ToInt32(userInput);
            GetFactorialSum(userNum);
        }
        public static void GetFactorialSum(int userNum)
        {
            if (userNum > 1 && userNum < 22)
            {
                int temp = userNum;
                int factorial = 0;
                for (int i = (userNum - 1); i > 0; i--)
                {
                    temp = temp * i;
                    factorial = temp;
                }
                Console.WriteLine("\nThe factorial of the number " + userNum + " is " + factorial + "!\n\nThanks for playing! See you next time.");
                Console.ReadLine();
            }
            else
            {
                Console.WriteLine("\nThe number entered is invalid.\n\nI'll choose for you: \n8");
                userNum = 8;
                int temp = userNum;
                int factorial = 0;
                for (int i = (userNum - 1); i > 0; i--)
                {
                    temp = temp * i;
                    factorial = temp;
                }
                Console.WriteLine("\nThe factorial of the number 8 is " + factorial + "!\n\nThanks for playing! See you next time.");
                Console.ReadLine();
            }
        }
    }
}
