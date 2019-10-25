import java.util.*;
class pangramString
{
public static void main(String[] args)
{
Scanner sc = new Scanner(System.in);
String a = sc.nextLine();
a = a.toLowerCase();
int i, index = 0;
int arr [] = new int [26];
for (i = 0; i < a.length(); i++)
{
if (a.charAt(i) >= 'a' && a.charAt(i) <= 'z')
	index = str.charAt(i) - 'a';
}
arr[index] = 1;
for (i = 0; i < arr.length; i++)
{
if (arr[i] == 0){
	System.out.println("String is not pangram");
	break;
}
}
System.out.println("String is pangram");
}
}
