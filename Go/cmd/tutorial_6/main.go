package main

import "fmt"

type fuelEngine struct {
	kmPerLitre uint8
	litre      uint8
	ownerInfo  owner
}

type electricEngine struct {
	kmPerKiloWattHour uint8
	kiloWattHour      uint8
	ownerInfo         owner
}

type owner struct {
	name string
}

type engine interface {
	milesLeft() uint8
}

func (e fuelEngine) milesLeft() uint8 {
	return e.kmPerLitre * e.litre
}

func (e electricEngine) milesLeft() uint8 {
	return e.kmPerKiloWattHour * e.kiloWattHour
}

func canMakeit(e engine, miles uint8) {
	if miles <= e.milesLeft() {
		fmt.Println("Can make it")
	} else {
		fmt.Println("Cannot make it")
	}
}

func main() {
	myEngine := fuelEngine{kmPerLitre: 20, litre: 10, ownerInfo: owner{"Alex"}}
	myEngine.litre = 12
	fmt.Println(myEngine.kmPerLitre, myEngine.litre)
	canMakeit(myEngine, 241)
}
