#!/usr/bin/python
###Written by Larry Walters larwal.dev###
###Random Number generator###

from random import randint, seed

seed_value = randint(1,99)
seed(seed_value)

def random_number(high_number):
    random_number = randint(1,high_number)
    print (random_number)


if __name__ == '__main__':
    print("This will generate a random number from 1 to your chosen highest number.")
    print("Example: inputing 99 with generate a number between 1 and 99")
    high_number = int(input("Enter the highest number: "))

    random_number(high_number)
