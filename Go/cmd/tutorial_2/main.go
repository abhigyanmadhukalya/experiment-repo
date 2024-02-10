package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	// int64 stores larger values than int32 or int16
	intNum := 32767
	fmt.Println(intNum)

	// float64 is more precise than float32
	var floatNum float32 = 12345678.9
	fmt.Println(floatNum)

	// Variables with diff data types cannot be used in arithmatic operations
	var floatNum32 float32 = 10.1
	var intNum32 int32 = 2
	result := floatNum32 + float32(intNum32)
	fmt.Println(result)

	myString := "Hello World"
	fmt.Println(myString)

	// to find length of string if using any non ASCII characters
	fmt.Println(utf8.RuneCountInString("γ"))

	// Rune are weird little bastards
	myRune := 'a'
	fmt.Println(myRune)

	myBoolean := false
	fmt.Println(myBoolean)

	const myConst string = "const value"
	fmt.Println(myConst)
}
