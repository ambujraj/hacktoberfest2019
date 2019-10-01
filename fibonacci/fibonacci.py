def Fibonacci(n): 
	if n<0: 
		print("Enter number greater than 0") 
	elif n==0: 
		return 0
  elif n==1: 
		return 1
	else: 
		return Fibonacci(n-1)+Fibonacci(n-2) 
    
n = raw_input("Enter Number?")
print(Fibonacci(n)) 
