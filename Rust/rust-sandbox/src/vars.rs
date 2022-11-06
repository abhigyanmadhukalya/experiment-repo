pub fn run() {
    let name = "Abhigyan";
    let mut age = 17;
    println!("My name is {} and I am {}", name, age);

    age = 18;
    println!("My name is {} and I am now {}", name, age);

    // Define const
    const ID: i32 = 001;
    println!("ID: {}", ID);

    let (my_name, my_age) = ("Abhigyan", 19);
    println!("{} is {}", my_name, my_age)
}
