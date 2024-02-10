package main

import (
	"errors"
	"fmt"
)

func main() {
	printValue := "Hello world"
	printMe(printValue)

	numerator := 11
	denomenator := 2
	result, remainder, err := intDivision(numerator, denomenator)

	if err != nil {
		fmt.Print(err.Error())
	} else if remainder == 0 {
		fmt.Printf("The result of the integer division is %v with no remainder", result)
	} else {
		fmt.Printf("The result of the integer division is %v with remainder %v", result, remainder)
	}

	// normal switch statements like C
	switch {
	case err != nil:
		fmt.Print(err.Error())
	case remainder == 0:
		fmt.Printf("The result of the integer division is %v", result)
	default:
		fmt.Printf("The result of the integer division is %v and remainder is %v", result, remainder)
	}

	// Conditional switch statements
	switch remainder {
	case 0:
		fmt.Println("The division was exact.")
	case 1, 2:
		fmt.Println("The division was close.")
	default:
		fmt.Println("The divison was not close.")
	}

	// && -> AND and || -> Or
	if 1 == 1 && 2 == 2 {
		fmt.Println("Passed the check")
	}
	if 1 == 2 || 3 == 3 {
		fmt.Println("Passed the check")
	}
}

func printMe(printValue string) {
	fmt.Println(printValue)
}

func intDivision(numerator int, denomenator int) (int, int, error) {
	var err error
	if denomenator == 0 {
		err = errors.New("cannot divide by zero")
	}
	result := numerator / denomenator
	remainder := numerator % denomenator
	return result, remainder, err
}
