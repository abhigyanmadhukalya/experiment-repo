pub fn run() {
    fn another_function(x: i32) {
        println!("The value of x is: {x}");
    }

    fn print_labelled_measurement(value: i32, unit_label: char) {
        println!("The measurement is: {value}{unit_label}")
    }
}
