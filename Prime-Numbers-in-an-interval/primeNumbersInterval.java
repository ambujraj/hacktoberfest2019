import java.util.*;
class primeNumbersInterval
{
public static void main (String[] args)
{
Scanner sc = new Scanner(System.in);
int a, b, ctr = 0, i, j, primes = 0; 
a = sc.nextInt();
b = sc.nextInt();
for (i = a; i <= b; i++)
{
for (j = 1; j <= i; j++)
{
if (i % j == 0) {
	ctr++;
}
}
if (ctr >= 2) 
	primes++;
}
System.out.println("Number of primes = " + primes);
}
}