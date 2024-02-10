package main

import "fmt"

func main() {
	// Arrays
	var myArr [5]int32
	myArr[0] = 4
	myArr[1] = 2
	myArr[2] = 12
	myArr[3] = 0
	myArr[4] = 11

	myArr2 := [...]int32{1, 2, 3}
	fmt.Println(myArr2)

	fmt.Println(myArr[0:4])
	fmt.Println(myArr[3])

	// Pointer to prinnt memory allocated
	fmt.Println(&myArr[0])
	fmt.Println(&myArr[1])
	fmt.Println(&myArr[2])
	fmt.Println(&myArr[3])

	// Slices
	intSlice := []int32{4, 5, 6}
	fmt.Printf("The length and capacity of slice: %v and %v\n", len(intSlice), cap(intSlice))
	// append only works on slices
	intSlice = append(intSlice, 7)
	fmt.Printf("The length and capacity of slice: %v and %v\n", len(intSlice), cap(intSlice))

	intSlice2 := []int32{8, 9}
	intSlice = append(intSlice, intSlice2...)
	fmt.Printf("New length is %v and capacity is %v", len(intSlice), cap(intSlice))

	// Adding make to add cap while making func
	intSlice3 := make([]int32, 3, 8)
	fmt.Println(intSlice3)

	// Maps
	myMap := make(map[string]uint8)
	fmt.Println(myMap)

	myMap2 := map[string]uint8{"Abhigyan": 18, "John": 23, "Adam": 40}
	fmt.Print(myMap2["Abhigyan"])
	// printing a key that does not exist returns the default of the type of map
	fmt.Print(myMap2["Jason"])

	age, ok := myMap["Abhigyan"]
	if ok {
		fmt.Printf("age of abhigyan is %v", age)
	} else {
		fmt.Println("Invalid name")
	}

	// delete the John entry
	delete(myMap2, "John")

	// Loops
	for name, age := range myMap2 {
		fmt.Printf("Name: %v, Age %v \n", name, age)
	}

	for i, v := range myArr {
		fmt.Printf("Index: %v, Value: %v \n", i, v)
	}

	for i := 1; i <= 10; i++ {
		fmt.Println(i)
	}
}
