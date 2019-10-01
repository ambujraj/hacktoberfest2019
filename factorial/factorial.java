import java.Scanner;

class Factorial
{  
  public static void main(String args[])
  { 
      int i;
      long fact=1; 
      int number = new Scanner(System.in).nextInt();   
      for(i=1;i<=number;i++)
      {    
          fact=fact*i;    
      }    
      System.out.println("Factorial of "+number+" is: "+fact);    
  }  
}  
