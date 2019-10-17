public class PalindromeCheck
{
    // Driver method 
    public static void main(String args[])
    {
        int number=45;
        if(checkPalindrome(number)){
            System.out.println(number+" is Palindrome");
        }else
            System.out.println(number+" is not Palindrome");
    }

    private static boolean checkPalindrome(int number) {
        int original_number = number;
        int reverse_number = 0;

        do {
            reverse_number = (reverse_number*10)+(number%10);
            number = number/10;
        } while (number>0);
        return reverse_number == original_number;
    }
}