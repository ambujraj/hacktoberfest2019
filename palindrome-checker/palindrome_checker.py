def is_palindrome(list_of_digits):
    """Returns whether or not a number is a palindrome.
       Param:
       list_of_digits(list): represents a number, each element is one digit
       Return:
       bool: True or False depending on whether list elements form palindrome.
    """
    reverse = ""
    for digit in reversed(list_of_digits):
        reverse += digit

    forward = ""
    for digit in list_of_digits:
        forward += digit

    return forward == reverse


num = str(input("Enter a number: "))
list_of_num = list(num)

# print message to output decision
if is_palindrome(list_of_num):
    print("Yes! This number is a palindrome!")
else:
    print("Sorry, this number is not a palindrome.")
