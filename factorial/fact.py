def fact(n):  
   if n == 1:  
       return n  
   else:  
       return n*fact(n-1)   
num = int(input("Input a number: "))  
if num < 0:  
   print("Sorry, you can't find factorial of negative value")  
elif num == 0:  
   print("The factorial of 0 is 1")  
else:  
   print("The factorial of"​,num,​"is"​,fact(num))  
