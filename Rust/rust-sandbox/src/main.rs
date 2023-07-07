mod print;
mod vars;
mod types;
mod constant;
mod shadowing;
mod functions;

fn main() {
    println!("Hello World!");
    print::run();
    vars::run();
    types::run();
    constant::run();
    shadowing::run();
    functions::run();
}
