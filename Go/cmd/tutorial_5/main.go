package main

import (
	"fmt"
	"strings"
)

func main() {
	myString := []rune("resume")
	indexed := myString[1]
	fmt.Printf("%v, %T\n", indexed, indexed)
	for i, v := range myString {
		fmt.Println(i, v)
	}
	fmt.Printf("\nThe length of 'myString' is %v", len(myString))

	myRune := 'a'
	fmt.Printf("\nmyRune = %v", myRune)

	strSlice := []string{"A", "b", "h", "i", "g", "y", "a", "n"}

	// this is a bit slow
	catSlice := ""
	for i := range strSlice {
		catSlice += strSlice[i]
	}
	fmt.Printf("\n%v", catSlice)

	// Much faster
	var strBuilder strings.Builder
	for i := range strSlice {
		strBuilder.WriteString(strSlice[i])
	}
	catStr := strBuilder.String()
	fmt.Printf("\n%v", catStr)
}
