pub fn run() {
    let x = 5;

    let x = x + 1;
    {
        let x = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }
    println!("The value of x is: {x}");
}

// The difference between "shadowing" and using "mut" is that we're effectively creating a new
// variable when we use the "let" keyword, we can change the data type but use the same variable
// name.
