package main

import (
	"fmt"
	"math/rand"
)

func rng(floor, ceil int) (output int) {
	output = rand.Intn(ceil-floor+1) + floor
	return
}

func main() {
	var floor, ceil int
	fmt.Println("Enter (floor) and (ceil) numbers separated by space (both number also included in the result): ")
	fmt.Scan(&floor, &ceil)
	fmt.Printf("Random number between %d - %d : %d\n", floor, ceil, rng(floor, ceil))
}
