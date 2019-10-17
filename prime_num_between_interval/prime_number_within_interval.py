print("Space separated lower and upper limit")

lower, upper = [int(x) for x in input().split(' ')]

for num in range(lower,upper + 1):
   # prime numbers are greater than 1
   if num > 1:
       for i in range(2,num):
           if (num % i) == 0:
               break
       else:
           print(num)