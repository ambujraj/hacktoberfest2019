package main

import (
	"fmt"
)

func fibonacci(n int) []int {
	x, y := 0, 1
	output := make([]int, n)
	for i := 0; i < n; i++ {
		output[i] = x
		x, y = y, x+y
	}
	return output
}

func main() {
	var n int
	fmt.Print("Enter the number: ")
	fmt.Scan(&n)
	fmt.Printf("The first %d element(s) of fibonacci sequence :\n", n)
	output := fibonacci(n)
	fmt.Println(output)
}
