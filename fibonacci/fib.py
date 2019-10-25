fib = input()
fib1=1
fib2=1
aux=0
for x in range (1, fib):
 aux=fib1
 fib1=fib2
 fib2=fib1+aux
print "the " + str(fib) + "'th is " + str(fib1)
