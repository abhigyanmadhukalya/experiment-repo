function printTax(price) {
  let tax = price * 0.21
  console.log("tax: ${tax}")
}

printTax(200)
//-----------------------------------------

function calculateTax(price) {
  return price * 0.21
}

const result = calculateTax(100)
console.log(result)

// Reusing the function using variables

let bread = 100
let milk = 50

breadTax = calculateTax(bread)
milkTax = calculateTax(milk)

console.log("Tax for bread is ${breadTax}")
console.log("Tax for milk is ${milkTax}")
//-----------------------------------------

// Multiple Parameters

function displayInfo(name, age, country) {
  console.log("${name} is ${age} years old and from ${country}")
}

displayInfo('Abhigyan', 17, 'India')
//------------------------------------------
