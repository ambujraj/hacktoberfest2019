def recfibo(n):  
   if n <= 1:  
       return n  
   else:  
       return(recfibo(n-1) + recfibo(n-2))  
# take input from the user  
nterms = int(input("How many terms? "))  
# check if the number of terms is valid  
if nterms <= 0:  
   print("Plese enter a positive integer")  
else:  
   print("Fibonacci sequence:")  
   for i in range(nterms):  
       print(recfibo(i))  

