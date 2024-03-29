pub fn run() {
    // Default is "i32"
    let _x = 1;

    // Default is "f64"
    let _y = 2.5;

    // Add explicit type
    let _y1: i64 = 285097302707;

    // Find max size
    println!("Max i32: {}", std::i32::MAX);
    println!("Max i64: {}", std::i64::MAX);
}
