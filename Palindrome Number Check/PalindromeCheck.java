import java.util.*;
class PalindromeCheck
{
public static void main (String[] args)
{
Scanner sc = new Scanner (System.in);
int n, r = 0, d;
n = sc.nextInt();
int m = n;
while (n > 0)
{
d = n % 10;
n = n / 10;
r = n * 10 + d;
}
if (r == m)
	System.out.println("Number is palindrome");
else
	System.out.println("Number is not palindrome");

}
}
