"use strict"

// Odin Project Exercise

let num = 5
console.log(num)

let solution = (4 + 6 + 9) / 77
console.log(solution)

let b = 7 * 9
console.log(b)

let a = 9 * b
console.log(a)

// End of Odin Project Exercise

// JavaScript Info Exercise

let name = 'John',
  admin = name

alert(admin)

// End of JavaScript Info Exercise

// Just messing around

function myFunction() {
  let x = 20;
  console.log(x)
}

let x = 40
console.log(x)
myFunction();
// End of messing around

// Handling Text - MDN Article

const string = 'The revolution will not be televised.'
console.log(string)

const badString = String
console.log(badString)

const bigMouth = 'I\'ve got no right to take my place.'               // \' is the escaped character
console.log(bigMouth)

const one = 'Hello, '
const two = 'how are you?'

const joined = `${one}${two}`         // Do not forget the back-tick marks (basically the tilde key)
console.log(joined)

const myString = 123
const myNum = Number(myString)
console.log(typeof myNum)

const myNum2 = 123
const myString2 = myNum.toString()
console.log(typeof myString2)

const song = 'Fight the Youth';
const score = 9;
const highestScore = 10;
const output = `I like the song ${song}. I gave it a score of ${score / highestScore * 100}%.`;
console.log(output);

const output2 = 'I like the song.\nI gave it a score of 90%.'                     // \n changes lines
let length = output2.length
console.log(output2)
console.log(length)

// End of MDN Article

// JavaScript String Methods

let str = "Apple, Banana, Kiwi"
let part = str.slice(7, 13)
console.log(part)

let text = 'Hello, welcome to Narayana!'
let myText = text.replace("Narayana", "Microsoft")
console.log(text)
console.log(myText)

// End of JavaScript String Methods
