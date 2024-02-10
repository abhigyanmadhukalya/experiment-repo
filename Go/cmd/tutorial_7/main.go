package main

import "fmt"

func main() {
	// Use pointers to make sure data is not copied and the variable passed is used, not its copy
	p := new(int32)
	var i int32

	fmt.Printf("The value p points to is %v", *p)
	fmt.Printf("\nThe value of i is %v", i)

	// Changing the value of a pointer
	*p = 10
	fmt.Printf("\nThe value p points to is %v", *p)

	// Makeing a pointer from an existing variable
	p1 := &i
	*p1 = 11
	fmt.Printf("\nThe p1 points to is %v", *p1)
	fmt.Printf("\nThe value of i is %v", i)

	thing1 := [5]float64{1, 2, 3, 4, 5}
	fmt.Printf("\nThe memory location of thing1 is %p", &thing1)
	fmt.Printf("\nThe value of thing1 is %v", thing1)
	result := square(&thing1)
	fmt.Printf("\nThe result is %v", result)
	fmt.Printf("\nThe value of thing1 is %v", thing1)
}

func square(thing2 *[5]float64) [5]float64 {
	fmt.Printf("\nThe memory location of thing2 is %p", thing2)
	for i := range thing2 {
		thing2[i] = thing2[i] * thing2[i]
	}
	return *thing2
}
