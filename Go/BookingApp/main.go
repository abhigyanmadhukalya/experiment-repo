package main

import (
	"fmt"
)

func main() {

	var conferenceName = "Go Conference"
	const conferenceTickets = 50
	var remainingTickets = 50

	fmt.Printf("Welcome to our %v booking application\n", conferenceName)
	fmt.Printf("We have total of %v and %v available currently\n", conferenceTickets, remainingTickets)
	fmt.Println("Get your tickets here to attend")

}