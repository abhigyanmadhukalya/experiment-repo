pub fn run() {
    let number = 3;
    if number < 5 {
        println!("Condition was true");
    } else {
        println!("Condition was false");
    }
}

pub fn if_let() {
    let condition = true;
    let number = if condition { 5 } else { 6 };
    println!("The value of number is: {number}")
}
