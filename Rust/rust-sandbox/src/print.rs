pub fn run() {
    // Print to console
    println!("Hello from the print.rs file");

    // Print numbers
    println!("Number: {}", 1);

    // Basic Formatting
    println!("{} is from {}", "Abhigyan", "India");

    // Positional Arguments
    println!("{0}, {1}, {2}", "Abhigyan", "Tokyo", "Dev");

    // Named Arguments
    println!(
        "{name} likes to play {game}",
        name = "Abhigyan",
        game = "CSGO"
    );

    // Placeholder Traits
    println!("Binary {:b}\nHex: {:x}\nOctal: {:o}", 10, 10, 10);

    // Debug Traits
    println!("{:?}", (12, true, "hello"));

    // Basic Math
    println!("10 + 10 = {}", 10 + 10);
}
