def reversed(word):
    return word[::-1]

def isPalindrome(word):
    return word == reversed(word)

if __name__ == "__main__":
    word = input("Input: ")
    
    is_palindrome = isPalindrome(word)
    result_string = "is a palindrome" if is_palindrome else "isn't a palindrome";

    print(word, result_string)
