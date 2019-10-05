package main

import "fmt"

func factorial(n int) int {
	result := 1
	for n > 0 {
		result *= n
		n--
	}
	return result
}

func main() {
	var n int
	fmt.Print("Enter the number: ")
	fmt.Scan(&n)
	output := factorial(n)
	fmt.Printf("Factorial of %d is %d\n", n, output)
}
